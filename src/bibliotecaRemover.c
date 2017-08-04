#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaStrings.h"
#include "bibliotecaRemover.h"

int removerTabela(char *nomeTabela){
	char *caminho = getCaminhoTabela(nomeTabela);
	if(caminho == NULL){
		return 0;
	}
	else if(arquivoExiste(caminho)){
		return !remove(caminho);
	}else{
		return -1;
	}
}

int arquivoExiste(char *caminho){
	FILE *fil = NULL;

	fil = fopen(caminho,"rb");
	if(fil != NULL){ /*Se existe um arquivo com esse caminho*/
		fclose(fil);
		return 1;
	}else{ /*Não existe um arquivo com esse caminho*/
		return 0;
	}
}