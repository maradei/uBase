#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "help.h"
#include "bibliotecaCompactar_lz78.c"
#include "bibliotecaStrings.h"

char** compactar_lz78(char* sequencia, int tam_dicionario, int tam_string){

    Dicionario *dicionario = criarMatrizStrings(tam_dicionario, tam_string);
    char output[tam_string*tam_dicionario];
    char cadeia[tam_string];
    char string_indice[tam_string]; // variavel auxiliar para transformar o indice em string e concatenar no output
    char proxSimbolo;
    int indiceSequencia=0; // percorrer a sequencia recebida
    int indiceDicionario=0; // numero para saber se o dicionario achou alguma ocorrencia, e qual o indice
    int indice=0; // indice para enumerar o dicionario
    int indiceEncontrado = -1; // armazenar o indice da cadeia encontrada no dicionario
    int stop = 1; // variavel para controlar a parada de envio de informacao

    dicionario->output = (char *) malloc(dicionario->tam_string*sizeof(char));
    limparDicionario(dicionario);
    strcpy(output, "");
    dicionario->output = sequencia;

    while(dicionario->output[indiceSequencia]!='\0' && stop == 1){
        strcpy(cadeia, "");
        proxSimbolo = dicionario->output[indiceSequencia];
        catChStr(cadeia, proxSimbolo);
        indiceDicionario = buscarNoDicionario(cadeia, dicionario);

        while(1==1){

            if(indiceDicionario!=-1){
                indiceSequencia++;

                if(dicionario->output[indiceSequencia]!='\0')
                    proxSimbolo = dicionario->output[indiceSequencia];

                else
                    stop = 0;
                catChStr(cadeia, proxSimbolo);
                indiceEncontrado = indiceDicionario;
                indiceDicionario = buscarNoDicionario(cadeia, dicionario);
            }

            else{
                indice++;
                strcat(output, "(");

                if(strlen(cadeia)==1)
                    strcat(output, "0");

                else
                    strcat(output, itoa(indiceEncontrado, string_indice, 10));
                strcat(output, ", '");

                if(stop != 0){
                    strcpy(dicionario->ptr[indice], cadeia);
                    catChStr(output, proxSimbolo);
                }

                strcat(output, "')");
                break;
            }
        }
        indiceSequencia++;
    }
    freeDicionario(dicionario);
    strcpy(dicionario->output,output);

    return dicionario->ptr;
}
