#include <string.h>

int criarArquivo(char *);
int removerArquivo(char *);
int arquivoExiste(char *);

/*
RETORNO: ( 1) Arquivo criado;
		 ( 0) Arquivo não existe;
		 (-1) Arquivo não criado - Erro;
*/

int criarArquivo(char *caminho){
	FILE *stream = NULL;
	int sucesso;

	sucesso = !arquivoExiste(caminho); //Se o arquivo não existe
	if(sucesso){
		stream = fopen(caminho,"wb");
		if(stream == NULL){
			sucesso = 0;
		}else{
			fclose(stream);
		}
	}

	return sucesso;
}

/*
RETORNO: ( 1) Arquivo deletado;
		 (-1) Arquivo não existe;
		 ( 0) Arquivo não deletado - Erro;
*/

int removerArquivo(char *caminho){
	if(arquivoExiste(caminho)){
		return !remove(caminho);
	}else{
		return -1;
	}
}

/*
RETORNO: (1) Arquivo existe;
		 (0) Arquivo não existe;
*/

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