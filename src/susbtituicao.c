#include <stdio.h>
#include <stdlib.h>

#define MAX_MEM 6

typedef struct
{
	int val[MAX_MEM];
	int status[MAX_MEM];
}Data;

void Select_sub ()
{
	FILE *fluxo_out, *fluxo;
	Data *registros;
	int i = 0;
	int freeze, menor, temp = MAX_MEM;

	registros = (Data*)malloc(sizeof(Data));
	if (registros == NULL) {
		//printf("Erro de Alocação\n");
		exit(-1);
	}

	for (i = 0; i < MAX_MEM; i++)
		registros->status[i] = 1;

	fluxo = fopen("Entrada.ori","rb");
	if(fluxo == NULL)
	{
		//printf("Erro ao abrir o arquivo para leitura - Entrada.ori.\n");
		exit(-1);
	}

	for(i=0;i<MAX_MEM;i++)
	fread(&(registros->val[i]),sizeof(int), 1 , fluxo);

	char Nome[8] ={'0','0','0','.','o','r','i','\0'};
	while(!feof(fluxo))
	{
		if(Nome[2] == '9')
		{
			if(Nome[1] == '9'){

				Nome[0]++;
				Nome[1] = '0';
				Nome[2] = '0';
			}else{
				Nome[2] = '0';
				Nome[1]++;
			}
		}else
		Nome[2]++;

		if(Nome[0] == '9')
			break;

		fluxo_out = fopen(Nome,"wb");
		if(fluxo_out == NULL)
		{
			//printf("Erro de Alocação.\n");
			exit(-1);
		}

		while (freeze)
		{
			for (i = 0; i < MAX_MEM && !registros->status[i]; i++);
			menor = i;

			for (i = 0; i < MAX_MEM; i++)
			{
				if (registros->val[i] < registros->val[menor] && registros->status[i])
					menor = i;
			}

			temp = registros->val[menor];
			fwrite(&(registros->val[menor]), sizeof(int), 1, fluxo_out);

			if (fread(&(registros->val[menor]),sizeof(int), 1, fluxo) 	)
			{
				if (registros->val[menor] < temp)
				{
					registros->status[menor] = 0;
					freeze--;
				}
				}else{
					freeze--;
					registros->status[menor] = 0;
				}
		}

		fclose(fluxo_out);

		for(i = 0; i < MAX_MEM; i++)
			registros->status[i] = 1;
		freeze = MAX_MEM;
	}
	fclose(fluxo);
}
