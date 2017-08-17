#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define limiteTamArgumento 50

char * getCaminhoTabela(char *nomeTabela){
	int tam;
	char *caminho = NULL;
	if(nomeTabela != NULL){
		tam = strlen(nomeTabela) + 11;
		caminho = (char *) malloc(tam*sizeof(char));	
		if(caminho == NULL){
			exit(-1);
			printf("Erro de alocacao!\n");
		}
		strcat(nomeTabela,".ori");
		strcat(caminho,"dados/");
		strcat(caminho,nomeTabela);
	}

	return caminho;
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

	vetResult[0] = malloc(i*sizeof(char));
	if(vetResult[0] == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	for(j=0;j<i;j++){
		vetResult[0][j] = vet[j];
	}

	if(i < n){
		i++;

		vetResult[1] = malloc((n-i)*sizeof(char));
		if(vetResult[1] == NULL){
			exit(-1);
			printf("Erro de alocação!\n");
		}

		for(j=i, c=0;j<n;j++, c++){
			vetResult[1][c] = vet[j];
		}
	}
	return vetResult;
}

void intToString(int num, char **str){
        if(str == NULL)
        {
            exit (-1);
        }
        sprintf(*str, "%d", num);
        
}

char* catChStr(char* sString, char cChar){
    size_t len = strlen(sString);
    sString[len++] = cChar;
    sString[len] = '\0';
    return sString;
}
