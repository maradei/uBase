#include <stdio.h>
#include <stdlib.h>

void separa (char**);
char* alocaMem (char*);
FILE* criaArquivo(char*);
void criaCampo(FILE*, char*);
void criar (int, char** );

//#include "includes.h"

int main( int argc, char *argv[])
{
    criar(argc, argv);
    return 0;
}

void separa(char** comandos)
{
    int i = 0, j = 0, flag = 0;
    char * nomeAtributo;
    char * nomeArquivo;

    nomeArquivo = alocaMem(nomeArquivo);
    nomeAtributo = alocaMem(nomeAtributo);

    while(comandos[i] != '\0')
    {
        if(flag == 0 && comandos[i] != '.')
            nomeArquivo[i] = comandos[i];

        if( comandos[i] == '.' || flag == 1 )
        {
            if (flag == 0)
                nomeArquivo[i + 1] = '\0';

            flag = 1;

            if(comandos [i] != '.')
            {
                nomeAtributo[j] = comandos[i];
                j++;
            }
        }

        i++;
    }

    nomeAtributo[j + 1] = '\0';

    criaArquivo(nomeArquivo);

}

char* alocaMem (char* ptr)
{
    ptr = malloc(50 * sizeof(char));
        if(ptr == NULL)
        {
            printf("Erro de Alocacao!");
            exit(-1);
        }
    return ptr;
}

FILE* criaArquivo(char* nomeArquivo )
{
    FILE* arquivo;

    arquivo = fopen(nomeArquivo, "wb");

    if(arquivo == NULL)
    {
        printf("Erro na criacao do arquivo!");
        return;
    }

    return arquivo;

}

void criaCampo(FILE* arquivo, char* nomeAtributo)
{
    printf("falta implementar");
}

void criar(int qtd, char** comandos)
{
    separa(comandos);
}
