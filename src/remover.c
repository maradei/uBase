#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "help.h"

#define limiteTamArgumento 50

typedef int (*fPtrRemover) (int, char **);

char ** split(int n, char *vet);

int remover(int n, char **vet){
	char **arquivoAtributo;
	int retorno = 1;

	if(vet == NULL){
		printf("Erro de argumento!\n");
	}
	else if(n < 6){
		arquivoAtributo = split(strlen(vet[2]), vet[2]);
		if(arquivoAtributo == NULL){
			help(9);
		}
		else if(arquivoAtributo[2] != NULL){
			if(strlen(arquivoAtributo[2]) > 0){
				if(n < 4){
					printf("Remover da tabela %s\n", arquivoAtributo[1]);
					printf("O Campo %s\n", arquivoAtributo[2]);		
				}
				else if(n > 4){
					printf("Remover da tabela: %s\n", arquivoAtributo[1]);
					printf("Campo: %s\n", arquivoAtributo[2]);
					printf("Chave: %s\n", vet[3]);
					printf("Valor da Chave: %s\n", vet[4]);
				}
				else{
					help(9);
				}
			}
			else{
				help(9);
			}
		}
		else{
			printf("Remover a tabela %s\n", arquivoAtributo[1]);
		}
	}
	else{
		help(9);
	}

	return 1; //Consertar retorno depois
}

char ** split(int n, char *vet){
	char **vetResult = NULL;
	int i,j,c;

	if(n > limiteTamArgumento){ //Limitando alocação
		return NULL;
	}

	for(i=0;i<n;i++){
		if(vet[i] == '.'){
			break;
		}
	}

	if(i < 1){
		return NULL;
	}

	vetResult = malloc(2*sizeof(char *));
	if(vetResult == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	vetResult[1] = malloc(i*sizeof(char));
	if(vetResult[1] == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	for(j=0;j<i;j++){
		vetResult[1][j] = vet[j];
	}

	if(i < n){
		i++;

		vetResult[2] = malloc(i*sizeof(char));
		if(vetResult[2] == NULL){
			exit(-1);
			printf("Erro de alocação!\n");
		}

		for(j=i, c=0;j<n;j++, c++){
			vetResult[2][c] = vet[j];
		}
	}
	return vetResult;
}

