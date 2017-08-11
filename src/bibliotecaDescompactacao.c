#include <stdio.h>
#include <stdlib.h>
#include "help.h"
#include "bibliotecaStrings.h"
#include "bibliotecaAlocacao.h"

void runLengthEncodeDescomp(char *arquivoEntrada){
	FILE *ptre, *ptrs;
	char c, *vetNum, cont, *caminho;
	int num;

	caminho = getCaminhoTabela(arquivoEntrada);

	ptre = fopen (caminho,"rb");
	if (ptre==NULL){
		help(4);
		exit(-1);
	}
	ptrs =  fopen ("dados/saidaDescomp.ori","wb");
	

	while ((fread (&c,sizeof (char), 1 , ptre ) == 1)) 
	{
		 
		cont= 0;
		if(c == '#')
		{
			
			while ((fread (&c,sizeof (char), 1 , ptre ) == 1) && (c != '#'))
			{
				cont++;	
			}

			vetNum = aloca (cont);
			fseek(ptre, -(cont+1), SEEK_CUR);
			fread (vetNum,sizeof (char),cont-1, ptre);

			


			num = atoi(vetNum);

			fread (&c,sizeof (char),1, ptre);

			for (int i = 0;i<num;i++ )
			{

				fwrite(&c,sizeof(char),1, ptrs);
			}
			
			fseek(ptre,1, SEEK_CUR);
		}
		else
			fwrite(&c,sizeof(char),1, ptrs);
	}	

	fclose (ptre);
	fclose (ptrs);
}
