#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id_tab, id_campo, id_geral;
    int val_i;
    double val_d;
    char *val_s;
    int typ; // 1 = int, 2 = dou, 3 = string/char
    int ponteiro;
}bloco;
/*
  *  Titulo:struct Index
  *
  *  Data de crição: 07/07/2017
  *  Ultima modificação: 13/08/2017
  *
  *  Descrição: estutura que contém um inteiro ed que armazena a linha do dado, uma estutura bloco que contém as informações de um bloco de informação
  *  e um ponteiro para a propria esturura Index.
*/
typedef struct Index{
	int ed;
	bloco elemento;
	struct Index *prox;
}Index;
/*
  *  Titulo:Li_index
  *
  *  Data de crição: 07/07/2017
  *  Ultima modificação: 13/08/2017
  *
  *  Descrição: estutura que contém dois ponteiros para a uma lista de uma struct Index com duas variaveis primeiro que aponta para o inicio
  *  da lista, e ultimo que aponta para o final.
*/
typedef struct{
      Index *primeiro,*ultimo;
}Li_index;
typedef struct so{
    bloco el;
    struct so *proxi;
}Li;
typedef struct{

     Li *primeiro,*ultimo;
}Lista;
/*
 *	Titulo:indexsecundaria.
 *
 *	Data de criação:05/07/2017.
 *  Ultima modificação: 16/08/2017.
 *
 *	Descrição: a função irá receber um arquivo indexado por chave primaria e ultilizando do algoritmo de indexação secundaria vai gerar um arquivo contendo
 *  o nome do atributo, onde se localiza o seu primeiro elemento, e sua quantidade. Além disso,ele modificará o arquivo indexado por chave primaria e acrescentando
 *  nele um ponteiro para a proxima localização deste atributo , por encadeamento.
 *
 *  Parametros: recebe um inteiro que contém a quantidade de atributos na tabela, um inteiro que contém o id do campo em ordem crescente dos atributos da tabela,
 *  um ponteiro para ponteiro para caractere que contém o nome do arquivo indexado por chave primaria, e um ponteiro para ponteiro para caractere que ira conter
 *  o nome do campo da tabela.
 *
 *  Retorno: retorna a void.
 */
void indexsecundaria(int ,int ,char ** ,char **);
/*
 *	Titulo:ordenalistaprimaria.
 *
 *	Data de criação:10/07/2017.
 *  Ultima modificação: 08/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para a lista Li_index e como resultado vai ordenar a lista em ordem crescente atravès do id do dado.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: ordena a lista,retorna a void.
 */
void ordenarlistaprimaria(Li_index *);
/*
 *	Titulo:ordenalistasecundaria.
 *
 *	Data de criação:12/07/2017.
 *  Ultima modificação: 08/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para a lista Li_index e como resultado vai ordenar a lista em ordem crescente atravès do valor que conter no atributo.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno:ordena a lista, retorna a void.
 */
void ordenarlistasecundaria(Li_index *);
/*
 *	Titulo:pegaratributo.
 *
 *	Data de criação:07/07/2017.
 *  Ultima modificação: 10/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para ponteiro do tipo File que contém o arquivo já aberto que será utilizado, e vai coletar o ed e o bloco referente
 *  ao campo selecionado e adicionar na lista de blocos.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index, um ponteiro para ponteiro para um tipo File que contém o arquivo a ser ultilizado,um inteiro
 *  contendo o numero do campo escolhido(sua posição), eum inteiro contendo o quantidade dos atributos.
 *
 *  Retorno: retorna a void.
 */
void pegaratributo(FILE **,Li_index *,int , int );
/*
 *	Titulo:criarlista.
 *
 *	Data de criação:12/07/2017.
 *  Ultima modificação: 14/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e ira inicializar a lista deste tipo.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: retorna a void.
 */
void criarlista(Li_index *);
/*
 *	Titulo:inserilista.
 *
 *	Data de criação:12/07/2017.
 *  Ultima modificação: 14/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e um tipo struct Index que contém os dados que foi obtido na coleta ao arquivo
 *  e vai inseri-lo na lista.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index, e um tipo struct Index que contém os dados do bloco e o ed.
 *
 *  Retorno: retorna a void.
 */
void inserilista(Li_index * ,Index * );
/*
 *	Titulo:ehvazia.
 *
 *	Data de criação:12/07/2017.
 *  Ultima modificação: 12/07/2017.
 *
 *	Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e checa se a lista é vazia ou não.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct.
 *
 *  Retorno: retorn 1 se for verdade, e 0 o contrario.
 */
int ehvazia(Li_index *);
/*
 *	Titulo:freelistaindex.
 *
 *	Data de criação:12/07/2017.
 *  Ultima modificação: 10/08/2017.
 *
 *	Descrição: a função irá receber um ponteiro para ponteiro de Li_index,e libera ele da memoria.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: retorna vazio.
 */
void freelistaindex(Li_index * );
void pegarlista(Lista *,FILE *);
void indexsecundaria(int Qatributo,int numcampo,char ** nomedoarquivo,char **nomecampo){
	Li_index *blocos,*aux;// colocar para conter o ed
	Lista *lista;//lista de blocos
	int cont = 0;
	bloco utili;
	char *vet=(char*)malloc((strlen(*nomecampo)+5)*(sizeof(char)));
	FILE *arquivo,*arquivo2;
	vet = strcpy(*nomecampo,".bin");
	arquivo2= fopen(vet,"rb") ;
	arquivo = fopen(*nomedoarquivo,"rb");
	if(arquivo==NULL||arquivo2==NULL ){
		puts("Erro, arquivo");
		exit(-1);
	}
	aux=blocos->primeiro;
	// criar um 2 arquivo guardando os ids, linhas e o atributo que desejamos
    pegaratributo(arquivo,blocos,numcampo,Qatributo);// pegar a lista do arquivo indexado;
    ordenarlistasecundaria(blocos);//ordenar o arquivo por chave secundaria, ou seja, pelo seu atributo
    fclose(arquivo);
	//criar um arquivo para conter a quantidade de um tipo de atributo, e o ponteiro da sua 1 posição, sucessivamente para todos
    while(aux!=NULL){
    	if(cont==0){
    	    if(aux->primeiro->elemento.val_i == aux->primeiro->prox->elemento.val_i|| aux->primeiro->elemento.val_d == aux->primeiro->prox->elemento.val_d||strcmp(aux->primeiro->elemento.val_s,aux->primeiro->prox->elemento.val_s)){
    		    cont++;
    		    aux->primeiro->elemento.ponteiro = aux->primeiro->elemento.ponteiro;//ed do proximo
    	        //salva o nome o ed;
    	        fwrite(aux->primeiro->elemento.val_s,sizeof(char),100,arquivo2);//salvar nome
    	        fwrite(aux->primeiro->ed,sizeof(int),1,arquivo2);//salvar
    	    }else{
    	    	aux->primeiro->elemento.ponteiro=-1;
    	    	//salva no arquivo
    	    	fwrite(aux->primeiro->elemento.val_s,sizeof(char),100,arquivo2);//salvar nome
    	        fwrite(aux->primeiro->ed,sizeof(int),1,arquivo2);//salvar
    	        fwrite(cont,sizeof(int),1,arquivo2);//salvar cont
    	    	cont=0; //zeranod o contador
    	    }
        }else if(aux->primeiro->elemento.val_i == aux->primeiro->prox->elemento.val_i|| aux->primeiro->elemento.val_d == aux->primeiro->prox->elemento.val_d||strcmp(aux->primeiro->elemento.val_s,aux->primeiro->prox->elemento.val_s)){
    		    cont++;
    	        //salva o nome o ed
    	        aux->primeiro->elemento.ponteiro = aux->primeiro->prox->ed;// ao ed do proximo
    	    }else{
    	    	aux->primeiro->elemento.ponteiro=-1;
    	        fwrite(cont,sizeof(int),1,arquivo2);//salvar cont
    	    	cont=0; //zeranod o contador
    	    }
    	 aux->primeiro=aux->primeiro->prox;
    }
    aux->primeiro = blocos->primeiro;
    //ordenar por chave primaria
    ordenarlistaprimaria(aux);
    //colocar o arquivo no começo antes deste processo
    arquivo = fopen(*nomedoarquivo,"rb");
	if(arquivo==NULL){
		puts("Erro, arquivo");
		exit(-1);
	}
    pegarlista(lista,arquivo);
    fclose(arquivo);
    arquivo = fopen(*nomedoarquivo,"wb");
	if(arquivo==NULL){
		puts("Erro, arquivo");
		exit(-1);
	}
    while(lista->primeiro!=NULL){// salvando no arquivo e substituindo o ponteiro no arquivo original indexado
    	for(cont=0;cont<Qatributo;cont++){
    	   if(aux->primeiro->elemento.id_campo == lista->primeiro->el.id_campo){
    		  lista->primeiro->el.ponteiro = aux->primeiro->elemento.ponteiro;
    		  aux->primeiro=aux->primeiro->prox;
    	   }
    	   utili = lista->primeiro->el;
    	   fwrite(&utili,sizeof(bloco),1,arquivo);
    	   lista->primeiro = lista->primeiro->proxi;
        }
    }

    fclose(arquivo);
    fclose(arquivo2);
    free(vet);
    free(aux);
    //salvar no arquivo indexado{pega tudos os dados e troca os atributos equivalentes e salva no arquivo}
    /*1 - pegar o primeiro elemento,contar+1, e colocar seu ed no arquivo
      2 - pegar o proximo elemento , contar +1, colocar seu ed no ponteiro para proximo do anterior
      3- se o proximo indereço diferente , o ponteiro para proximo do anterior será -1
      e pegamos esse elemento como o comparador e colocar no arquivo a quantidade do comparador anterior.
      4 - repetir os passos até o fim do aquivo;
    */
	// criar outro arquivo como o do 2 passo e acrescentar 1 inteiro que será um ponteiro para o proximo elemento daquele tipo
	// depois ordenar este arquivo por chave primária.
    //e no final unir ao 1 arquivo q passou pela indexação simples.

}

void ordenarlistaprimaria(Li_index *list){// bublesort com estrutura
     Index *aux,*aux2,*aux3, *anterior;
     aux=list->primeiro;
     anterior = list->primeiro;
     while(aux!= NULL){
     	aux2=aux;
     	aux3=aux->prox;
     	while(aux2!=NULL){
          if(aux2->elemento.id_geral > aux3->elemento.id_geral){
          	aux2->prox=aux3->prox;
          	anterior->prox = aux3;
          	aux3->prox = aux2;
          	anterior = aux3;
          	aux3=aux2->prox;
          } else{
            anterior =aux2;
            aux2=aux2->prox;
            aux3=aux2->prox;
          }
        }
        anterior=aux;
        aux=aux->prox;
     }
     free(aux);
     free(anterior);
     free(aux2);
     free(aux3);
}
void ordenarlistasecundaria(Li_index *list){// bublesort com estrutura
     Index *aux,*aux2,*aux3, *anterior;
     aux=list->primeiro;
     anterior = list->primeiro;
     while(aux!= NULL){
     	aux2=aux;
     	aux3=aux->prox;
     	while(aux2!=NULL){
          if(aux2->elemento.val_i > aux3->elemento.val_i || aux2->elemento.val_d > aux3->elemento.val_d || strcmp(aux2->elemento.val_s,aux3->elemento.val_s) ){
          	aux2->prox=aux3->prox;
          	anterior->prox = aux3;
          	aux3->prox = aux2;
          	anterior = aux3;
          	aux3=aux2->prox;
          } else{
            anterior =aux2;
            aux2=aux2->prox;
            aux3=aux2->prox;
          }
        }
        anterior=aux;
        aux=aux->prox;
     }
     free(aux);
     free(anterior);
     free(aux2);
     free(aux3);
}//pega o atributo do arquivo
void pegaratributo(FILE **arquivo,Li_index *block,int campoescolhido, int tamTabela){
	Index dado;
	int cont=1;
	//criarlista;
	criarlista(block);
    while(!feof(*arquivo)){
    	dado.ed = cont;
	//percorer o arquivo e inserir na lista com o seu ed
       fseek(*arquivo,sizeof(bloco)*campoescolhido-1,SEEK_END);
       fread(&dado.elemento,sizeof(bloco),1,*arquivo);
       inserilista(block,&dado);
       fseek(*arquivo,sizeof(bloco)*campoescolhido-tamTabela,SEEK_END);
       cont++;
    }
}//cria a lista
void criarlista(Li_index *block){
	block->primeiro = malloc(sizeof(Index));
	block->primeiro=NULL;
	block->ultimo = NULL;
	};
//inseri na lista
void inserilista(Li_index *block,Index *dado){
    dado->prox=NULL;
    if(ehvazia(block)){
       block->primeiro = dado;
       block->ultimo = block->primeiro;
	}else{
	   block->ultimo->prox = dado;
       block->ultimo = block->ultimo->prox;
	}

}//verifica se a lista está vazia
int ehvazia(Li_index *list){
	if(list->primeiro==NULL){
		return 1;
	}else{
		return 0;
	}

}
void freelistaindex(Li_index * block){
    Index *aux=block->primeiro;
	while(aux != NULL){
		block->primeiro=block->primeiro->prox;
        free(aux);
        aux = block->primeiro;
	}
	block = NULL;
}
void pegarlista(Lista *i,FILE *arquivo){
}
