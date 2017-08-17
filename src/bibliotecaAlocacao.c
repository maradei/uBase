#include <stdio.h>
#include <stdlib.h>

char ** alocarVetStrings(int n){
	char **vet = NULL;

	vet = (char **) malloc(n*sizeof(char *));
	if(vet == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	return vet;
}

void freeSeguro(void *vet){
	if(vet != NULL){
		free(vet);
		vet = NULL;
	}
}

char* aloca (int n)
{
	char *vet;

	vet= malloc (n*sizeof(char));
	if (vet==NULL){
		printf("Erro de alcacao\n");
	}

	return vet;
} 
