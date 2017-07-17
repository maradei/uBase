#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operacoes.h"

int main(int argc, char *argv[]){
	int tam = strlen(argv[2]) + 11;
	char *caminho;

	caminho = (char *) malloc(tam*sizeof(char));

	strcat(argv[2],".ori\0");
	strcat(caminho,"dados/");
	strcat(caminho,argv[2]);
	switch(criarArquivo(caminho)){
		case 0:{
			printf("Ja existe um arquivo com esse nome!\n");
			break;
		}
		case -1:{
			printf("Erro ao criar arquivo!\n");
			break;
		}
		default:{
			printf("Arquivo criado com sucesso!\n");
			break;
		}
	}
	
	switch(removerArquivo(caminho)){
		case 1:{
			printf("Arquivo deletado!\n");
			break;
		}
		case -1:{
			printf("Arquivo nao existe!\n");
			break;
		}
		default:{
			printf("Erro ao deletar arquivo!\n");
			break;
		}
	}

	return 0;
}