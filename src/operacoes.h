#include <stdio.h>
#include <stdlib.h>

/****
*
* TÍTULO: PROTÓTIPO DE UM PONTEIRO PARA FUNÇÃO DE ORDENAÇÃO
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 17/06/2017
* ÚLTIMA MODIFICAÇÃO: 17/07/2017
* 
* PARÂMETROS: - (void*): UM PONTEIRO A VOID, REPRESENTANDO O VETOR A SER ORDENADO;
*             - (int): O TAMANHO DO VETOR A SER ORDENADO;
*
* VALOR DE RETORNO: A FUNÇÃO REFERENCIADA PRECISA RETORNAR UM PONTEIRO A VOID
*
* UTILIZADO NA FUNÇÃO: ORDENAR REGISTROS
*
****/
typedef void* (*fptrOrdenar)(void*,int);

/*PROTÓTIPOS DAS FUNÇÕES*/
int criarArquivo(char *);
int removerArquivo(char *);
int arquivoExiste(char *);

void * ordenarRegistros(void *, int, fptrOrdenar);

/****
*
* TÍTULO: FUNÇÃO CRIAR ARQUIVO
*
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 20/06/2017
* ÚLTIMA MODIFICAÇÃO: 17/07/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ CRIAR UM ARQUIVO, DADO UM CAMINHO
*
* PARÂMETROS: - (caminho): UM PONTEIRO A CHAR, QUE SERÁ O CAMINHO DE UM ARQUIVO A SER CRIADO
*
* VALORES DE RETORNO: ( 1) ARQUIVO CRIADO;
*					  ( 0) ARQUIVO JÁ EXISTE;
*					  (-1) ARQUIVO NÃO CRIADO - ERRO.
****/

int criarArquivo(char *caminho){
	FILE *stream = NULL;
	int sucesso;

	sucesso = !arquivoExiste(caminho); //Se o arquivo não existe
	if(sucesso){
		stream = fopen(caminho,"wb");
		if(stream == NULL){
			sucesso = -1;
		}else{
			fclose(stream);
		}
	}

	return sucesso;
}

/****
*
* TÍTULO: FUNÇÃO REMOVER ARQUIVO
*
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 20/06/2017
* ÚLTIMA MODIFICAÇÃO: 17/07/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ REMOVER UM ARQUIVO, DADO SEU CAMINHO
*
* PARÂMETROS: - (caminho): UM PONTEIRO A CHAR, QUE SERÁ O CAMINHO DE UM ARQUIVO A SER DELETADO
*
* VALORES DE RETORNO: ( 1) ARQUIVO DELETADO;
*					  (-1) ARQUIVO NÃO EXISTE;
*					  ( 0) ARQUIVO NÃO DELETADO - ERRO.
****/

int removerArquivo(char *caminho){
	if(arquivoExiste(caminho)){
		return !remove(caminho);
	}else{
		return -1;
	}
}

/****
*
* TÍTULO: FUNÇÃO DE VERIFICAÇÃO DE EXISTÊNCIA DO ARQUIVO
*
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 20/06/2017
* ÚLTIMA MODIFICAÇÃO: 17/07/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ RETORNAR SE UM ARQUIVO EXISTE, DADO O CAMINHO DO MESMO.
*
* PARÂMETROS: - (caminho): UM PONTEIRO A CHAR, QUE SERÁ O CAMINHO DE UM SUPOSTO ARQUIVO CRIADO
*
* VALOR DE RETORNO: (1) ARQUIVO EXISTE;
*					(0) ARQUIVO NÃO EXISTE.
****/

int arquivoExiste(char *caminho){
	FILE *fil = NULL;

	fil = fopen(caminho,"rb");
	if(fil != NULL){ /*Se existe um arquivo com esse caminho*/
		fclose(fil);
		return 1;
	}else{ /*Não existe um arquivo com esse caminho*/
		return 0;
	}
}

/****
*
* TÍTULO: FUNÇÃO ORDENAR REGISTROS
*
* AUTOR: LEVY MARLON SOUZA SANTIAGO
*
* DATA DA CRIAÇÃO: 17/07/2017
* ÚLTIMA MODIFICAÇÃO: 17/07/2017
*
* DESCRIÇÃO: ESTA FUNÇÃO IRÁ ORDENAR UM VETOR DE ACORDO COM UMA FUNÇÃO DE ORDENAÇÃO DADA
*
* PARÂMETROS: - (vet): PONTEIRO A VOID, REPRESENTANDO O VETOR A SER ORDENADO;
*             - (tam): O TAMANHO DO VETOR A SER ORDENADO;
*             - (fOrdenar): A FUNÇÃO QUE SERÁ URTILIZADA PARA ORDENAR O VETOR.
*
* VALOR DE RETORNO: A FUNÇÃO RETORNA UM PONTEIRO A VOID, OU SEJA, O VETOR ORDENADO
*
****/
void * ordenarRegistros(void *vet, int tam, fptrOrdenar fOrdenar){
	if(fOrdenar != NULL){
		return fOrdenar(vet,tam);
	}else{
		return NULL;
		printf("Função ainda não implementada.\n");
	}
}