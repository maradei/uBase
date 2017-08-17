#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define limiteTamArgumento 50

char * getCaminhoTabela(char *nomeTabela){
	int tam;
	char *caminho = NULL;
	if(nomeTabela != NULL){
		tam = strlen(nomeTabela) + 11; //Tamanho do caminho a ser alocado
		caminho = (char *) malloc(tam*sizeof(char));
		if(caminho == NULL){
			exit(-1);
			printf("Erro de alocacao!\n");
		}
		strcat(nomeTabela,".ori"); //Concatenando o nome da tabela com os dados do caminho
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

	for(i=0;i<n;i++){ //Anda até o ponto
		if(vet[i] == '.'){
			break;
		}
	}

	if(i < 1){ //Se existe nome de tabela
		return NULL;
	}

	vetResult = malloc(2*sizeof(char *));
	if(vetResult == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	vetResult[0] = malloc(i*sizeof(char)); //Aloca vetor para nome de tabela
	if(vetResult[0] == NULL){
		exit(-1);
		printf("Erro de alocação!\n");
	}

	for(j=0;j<i;j++){ //Separando o nome da tabela
		vetResult[0][j] = vet[j];
	}

	if(i < n){ //Se existe um atributo
		i++;

		vetResult[1] = malloc((n-i)*sizeof(char)); //Aloca vetor para nome de atributo
		if(vetResult[1] == NULL){
			exit(-1);
			printf("Erro de alocação!\n");
		}

		for(j=i, c=0;j<n;j++, c++){ //Separando o nome do atributo
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
