#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[ ]){
  if(argc == 1)
    printf("Chama help\n");
  else
    Interpretar(argc, argv);
  return 0;
}

void Interpretar(int n, char **vetor){
  if(strcmp(vetor[1], "-criar") == 0 ||strcmp(vetor[1], "-c") == 0){
    if()
  }
  if(strcmp(vetor[1], "-inserir") == 0 ||strcmp(vetor[1], "-i") == 0)
  if(strcmp(vetor[1], "-remover") == 0 ||strcmp(vetor[1], "-r") == 0)
    if(n < 3)
      printf("Chamar a função HELP para Remover\n"); // help(0)
    else
      printf("Chama a função remover\n"); // remover(n, vetor);
  else
  if(strcmp(vetor[1], "-buscar") == 0 ||strcmp(vetor[1], "-b") == 0)
  if(strcmp(vetor[1], "-ordenar") == 0 ||strcmp(vetor[1], "-o") == 0)
  if(strcmp(vetor[1], "-compactar") == 0 ||strcmp(vetor[1], "-cmp") == 0)
  if(strcmp(vetor[1], "-descompactar") == 0 ||strcmp(vetor[1], "-dcmp") == 0)
  if(strcmp(vetor[1], "-criptografar") == 0 ||strcmp(vetor[1], "-cpt") == 0)
  if(strcmp(vetor[1], "-descriptografar") == 0 ||strcmp(vetor[1], "-dcpt") == 0)
}
