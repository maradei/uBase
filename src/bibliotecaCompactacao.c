#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaStrings.h"
#include "help.h"
#include "bibliotecaAlocacao.h"
#include "bibliotecaOperacoes.h"

void runLengthEncodeComp(char *arquivoEntrada)
{
	FILE *ptre, *ptrs;
	char c1 , c2, hashtag,*contString, *caminho;
	int retorno,cont=1,num;

	caminho = getCaminhoTabela(arquivoEntrada);

	ptre = fopen (caminho,"rb");
	if(ptre == NULL){
		help(3);
		exit(-1);
	}
	ptrs = fopen ("dados/saida.ori","wb");
	if(ptrs == NULL){
		printf("Erro ao abrir o arquivo.\n");
		exit(-1);
	}	
	
	fread (&c1,sizeof (char), 1 , ptre);
	hashtag = '#';

	

	while(!feof(ptre))
	{
		
		cont=1;
		while ((fread (&c2,sizeof (char), 1 , ptre) == 1) && (c1==c2))
		{	
			cont++;
		}
		
		//printf("%d\n", cont);
		
		if(cont>1)
		{

			num = casasDecimais (cont);
			
			contString = aloca(num);
	
			intToString(cont,&contString);

			fwrite(&hashtag,sizeof(char),1, ptrs);
			fwrite(contString,sizeof(char),num, ptrs);
			fwrite(&c1,sizeof(char),1, ptrs);
			fwrite(&hashtag,sizeof(char),1, ptrs);
			
		}

		else
			fwrite(&c1,sizeof(char),1, ptrs);
		c1=c2;
	}
	fclose (ptre);
	fclose (ptrs);
}
