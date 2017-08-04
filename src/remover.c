#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "help.h"
#include "bibliotecaRemover.h"
#include "bibliotecaAlocacao.h"
#include "bibliotecaStrings.h"

void remover(int n, char **vet){
	char **arquivoAtributo = NULL;
	char **vetDados = NULL;

	if(vet == NULL){
		printf("Erro de argumento!\n");
	}
	else if(n < 6){
		arquivoAtributo = split(strlen(vet[2]), vet[2]);
		if(arquivoAtributo == NULL){
			help(9);
		}
		else if(arquivoAtributo[1] != NULL){
			if(strlen(arquivoAtributo[1]) > 0){
				if(n == 3){
					printf("Remover da tabela %s\n", arquivoAtributo[0]);
					printf("O Campo %s\n", arquivoAtributo[1]);
				}
				else if(n == 5){
					printf("Remover da tabela: %s\n", arquivoAtributo[0]);
					printf("Campo: %s\n", arquivoAtributo[1]);
					printf("Chave: %s\n", vet[3]);
					printf("Valor da Chave: %s\n", vet[4]);
					vetDados = alocarVetStrings(4);
					vetDados[0] = arquivoAtributo[0];
					vetDados[1] = arquivoAtributo[1];
					vetDados[2] = vet[3];
					vetDados[3] = vet[4];
				}
				else{
					help(9);
				}
			}
			else{
				help(9);
			}
		}
		else if(n == 3){
			printf("Removendo a tabela %s...\n", arquivoAtributo[0]);
			switch(removerTabela(arquivoAtributo[0])){
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
		}
		else if(n == 5){
			printf("Remover da tabela %s\n", arquivoAtributo[0]);
			printf("Chave: %s\n", vet[3]);
			printf("Chave Valor: %s\n", vet[4]);
			vetDados = alocarVetStrings(3);
			vetDados[0] = arquivoAtributo[0];
			vetDados[1] = vet[3];
			vetDados[2] = vet[4];
		}
		else{
			help(9);
		}
	}
	else{
		help(9);
	}
	
	if(arquivoAtributo[0] != NULL){
		freeSeguro(arquivoAtributo[0]);
	}
	if(arquivoAtributo[1] != NULL){
		freeSeguro(arquivoAtributo[1]);
	}
	if(arquivoAtributo != NULL){
		freeSeguro(arquivoAtributo);
	}
	if(vetDados != NULL){
		freeSeguro(vetDados);
	}
}