#include <stdio.h>
#include <stdlib.h>

#define MAX_MEM 6
#define MAX_RES 6

typedef struct{
	int val[MAX_MEM];
	int res[MAX_RES];
	int status[MAX_MEM];
}Data;

void Select_selec()
{
	FILE *fluxo_out, *fluxo;
	Data *registros;
	int i, menor, temp, res_qt, mem_qt, aux = 0;

	registros = (Data*)malloc(sizeof(Data));
	if (registros == NULL) {
		//printf("Erro de Alocação\n");
		exit(-1);
	}

	fluxo = fopen("Entrada.ori","rb");
	if(fluxo == NULL)
	{
		//printf("Erro ao abrir o arquivo para leitura - Entrada.ori.\n");
		exit(-1);
	}

	char Nome[8] ={'0','0','0','.','o','r','i','\0'};
	while(mem_qt)
	{
		if(Nome[2] == '9')
		{
			if(Nome[1] == '9')
			{
				Nome[0]++;
				Nome[1] = '0';
				Nome[2] = '0';
			}
			else
			{
				Nome[2] = '0';
				Nome[1]++;
			}
		}

		else
			Nome[2]++;

		if(Nome[0] == '9')
			break;

		fluxo_out = fopen(Nome,"wb");
		if(fluxo_out == NULL)
		{
			//printf("Erro de Alocação.\n");
			exit(-1);
		}

		if(!mem_qt)
		{
			for(i=0;i<MAX_MEM;i++)
			{
				fread(&(registros->val[i]),sizeof(int), 1 , fluxo);
				registros->status[i] = 1;
				mem_qt ++;
			}
		}

		while(mem_qt)
		{
			for(i=0; i < MAX_MEM && !registros->status[i];i++);
			menor = i;

			for(i = 0; i < MAX_MEM; i++)
			{
				if(registros->val[i] < registros->val[menor] && registros->status[i])
				{
					menor = i;
				}
			}

			temp = registros->val[menor];
			fwrite(&(registros->val[menor]), sizeof(int), 1 , fluxo_out);
			registros->status[menor] = 0;
			mem_qt--;

			while(!registros->status[menor] && res_qt < MAX_RES && fread(&(registros->val[menor]),sizeof(int), 1, fluxo))
			{
				if(registros->val[menor] < temp)
				{
					registros->res[res_qt] = registros->val[menor];
					res_qt++;
				}
				else
				{
					registros->status[menor] = 1;
					mem_qt++;
				}
			}
		}

		if(res_qt)
		{
			fclose(fluxo_out);
			aux = res_qt;
			for(i=0;i < aux ;i++)
			{
				registros->val[i] = registros->res[i];
				registros->status[i] = 1;
				mem_qt++;
				res_qt--;
			}
		}
	}
	fclose(fluxo_out);
}
