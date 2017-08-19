#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num_strings;
    int tam_string;
    char* output;
    char** ptr;
}Dicionario;

int buscarNoDicionario(char *termo, Dicionario *dicionario){
    int indice;
    for(indice=0;indice<dicionario->num_strings;indice++){
        if(strcmp(termo, dicionario->ptr[indice])==0){
            return indice;
        }
    }
    return -1;
}

void limparDicionario(Dicionario *dicionario){
    int indice;
    for(indice=0;indice<dicionario->tam_string;indice++){
        strcpy(dicionario->ptr[indice], "");
    }
}

void freeDicionario(Dicionario *dicionario) {

    free(dicionario);
}

Dicionario* criarMatrizStrings(int num_strings, int tam_string){
    char **matrizString = (char**)malloc(num_strings*sizeof(char));
    int i=0;

    for(i=0;i<num_strings;i++)
        *(matrizString + i) = (char*)malloc(num_strings*tam_string*sizeof(char));

    Dicionario *dicionario = (Dicionario *) malloc(sizeof(Dicionario));
    dicionario->num_strings = num_strings;
    dicionario->tam_string = tam_string;
    dicionario->ptr = matrizString;

    return dicionario;
}

