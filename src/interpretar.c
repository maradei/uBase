
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "help.h"
#include "compactar.h"

void interpretar(int n, char **vetor){
  if(strcmp(vetor[1], "-criar") == 0 ||strcmp(vetor[1], "-c") == 0)
    if(n < 2)
      help(2);
    else
    printf("Chama a função c\n");
      // criar(n,vetor);
  else
    if(strcmp(vetor[1], "-inserir") == 0 ||strcmp(vetor[1], "-i") == 0)
      if(n < 3)
        // printf("Chamar a função HELP para inserir\n");
        help(7);
      else
      //chamo a função insterir
        // inserir(n,vetor);
        printf("Chama a função i\n");
    else
        // Função Remover
      if(strcmp(vetor[1], "-remover") == 0 ||strcmp(vetor[1], "-r") == 0)
        if(n < 3)
          // printf("Chamar a função HELP para Remover\n"); // help(0)
          help(9);
        else
          // printf("Chama a função remover\n"); // remover(n, vetor);
          // remover(n,vetor);
          printf("Chama a função remover\n");
      else
        if(strcmp(vetor[1], "-buscar") == 0 ||strcmp(vetor[1], "-b") == 0)
          if(n < 3)
            help(1);
          else
            // buscar(n,vetor);
            printf("Chama a função -b\n");
        else
          if(strcmp(vetor[1], "-ordenar") == 0 ||strcmp(vetor[1], "-o") == 0)
            if(n < 3)
              help(8);
            else
              // ordenar(n,vetor);
              printf("Chama a função -o\n");
          else
            if(strcmp(vetor[1], "-compactar") == 0 ||strcmp(vetor[1], "-cmp") == 0)
              if(n < 3)
                help(3);
              else
                compactar(n,vetor);
                //printf("Chama a função -c\n");
            else
              if(strcmp(vetor[1], "-descompactar") == 0 ||strcmp(vetor[1], "-dcmp") == 0)
                if(n < 2)
                  help(4);
                else
                  // descompactar(n,vetor);
                  printf("Chama a função -dc\n");
              else
                if(strcmp(vetor[1], "-criptografar") == 0 ||strcmp(vetor[1], "-cpt") == 0)
                  if(n < 2)
                    help(5);
                  else
                    // criptografar(n,vetor);
                    printf("Chama a função -cp\n");
                else
                  if(strcmp(vetor[1], "-descriptografar") == 0 ||strcmp(vetor[1], "-dcpt") == 0)
                    if(n < 3)
                      help(6);
                    else
                      // descriptografar(n,vetor);
                      printf("Chama a função -dcp\n");
      }
