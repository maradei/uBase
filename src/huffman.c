#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct arv{
	int Caractere;
	int Qtd;
	struct arv *Esq, *Dir;
}Arvore;


#define sigma 256

char *codificacao[256];

Arvore *aux[sigma];
int qtyAux = 0;



void insertionSort(Arvore **original, int length) {
	int i, j;
	Arvore *atual;
	for (i = 1; i < length; i++) {
		atual = original[i];
		j = i - 1;

		while ((j >= 0) && (atual->Qtd < original[j]->Qtd)) {
			original[j + 1] = original[j];
			j = j - 1;
		}

		original[j + 1] = atual;
	}

}



void percorre(Arvore *a, char *stringAgora){
	if(a->Esq == NULL && a->Dir == NULL){
			codificacao[a->Caractere] = (char*)malloc(sizeof(char)*strlen(stringAgora));
			strcpy(codificacao[a->Caractere],stringAgora);
	}else{
		char *novaString = (char*)malloc(sizeof(char)*(strlen(stringAgora)+3));
		strcpy(novaString,stringAgora);
		strcat(novaString,"0");
		percorre(a->Esq,novaString);
		novaString = (char*)malloc(sizeof(char)*(strlen(stringAgora)+3));
		strcpy(novaString,stringAgora);
		strcat(novaString,"1");
		percorre(a->Dir,novaString);
	}
}

void codificar(char *filename){
	char *string;
	char bloco = 0;
	int contador,i,j;
	long Tamanho;
	FILE * Fluxo, *FluxoSaida;
	
	Fluxo = fopen (filename, "rb");
	if (Fluxo == NULL){
		printf("Error de alocação!\n");
		exit(-1);
	}
	FluxoSaida = fopen ("ArquivoSaida", "wb");
	if (FluxoSaida == NULL){
		printf("Error de alocação!\n");
		exit(-1);
	}
	// Conta quantos caracteres tem no arquivo
	fseek (Fluxo, 0, SEEK_END);
	Tamanho = ftell (Fluxo);
	fseek (Fluxo, 0, SEEK_SET);
	string = (char*)malloc(Tamanho);
	if(string == NULL){
		printf("Error de alocação!\n");
		exit(-1);
	}
	fread (string, 1, Tamanho, Fluxo);
	fclose (Fluxo);
	
	for(i = 0; i < Tamanho; i++){
		int t = strlen(codificacao[string[i]]);
		char cod[256];
		strcpy(cod,codificacao[string[i]]);
		for(j=0; j < t; j++){
			if(cod[j] == '0')
				bloco = bloco << 1;
			else{
				bloco = bloco+1 << 1;
			}
			contador++;
			if(contador == 8){
				//grava o bloco
				printf("gravou\n");
				fwrite(&bloco,sizeof(char),1,FluxoSaida);
				bloco = 0;
				contador = 0;
			}
		}
			
	}
	bloco = bloco << (8-contador);
	fwrite(&bloco,sizeof(char),1,FluxoSaida);
	printf("gravou\n");
	fclose(FluxoSaida);
}




void huffman(char *filename)
{
	
	char *string;
	long Tamanho;
	FILE * Fluxo;
	int ascii[256] = {0},i,size;
	

	
	Fluxo = fopen (filename, "rb");
	if (Fluxo == NULL){
		printf("O arquivo ou Tabela não existe!\n");
		exit(-1);
	}
	// Conta quantos caracteres tem no arquivo
	fseek (Fluxo, 0, SEEK_END);
	Tamanho = ftell (Fluxo);
	fseek (Fluxo, 0, SEEK_SET);
	string = (char*)malloc(Tamanho);
	if(string == NULL){
		printf("Error de alocação!\n");
		exit(-1);
	}
	
	fread (string, 1, Tamanho, Fluxo);
	fclose (Fluxo);

	//conta quantidade de caracteres individuais
	for(i=0; i < Tamanho; i++)
		ascii[string[i]]++;
	
	//cria lista com nós
	for(i=0; i < 256; i++)
		if(ascii[i] != 0){
			Arvore *new = (Arvore*)malloc(sizeof(Arvore));
			new->Caractere = i;
			new->Qtd = ascii[i];
			new->Esq = NULL;
			new->Dir = NULL;
			aux[qtyAux++] = new;
		}
		
	
	//loop de huffman-----------------------------------------------
	while(qtyAux != 1){
		int newQty = 0,j;
		insertionSort(aux,qtyAux);
	for(i=0; i < qtyAux; i++)
		printf("%d - ",aux[i]->Qtd);
		printf("\n");
		for(j=0; j+1 < qtyAux; j+=2){
				Arvore *new = (Arvore*)malloc(sizeof(Arvore));
				new->Caractere = -1;
				new->Qtd = aux[j]->Qtd + aux[j+1]->Qtd;
				new->Esq = aux[j];
				new->Dir = aux[j+1];
				aux[newQty++] = new;
		}
		if(qtyAux%2) aux[newQty++] = aux[qtyAux-1];
		qtyAux = newQty;	
	}
	//-----------------------------------------------------
 
	percorre(aux[0],"");
	codificar(filename);
}
