#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	val_i - valor inteiro do campo, id_tab - qual tabela pertence, 
	id_campo - qual campo na tabela pertence, id_geral - quem / qual "coisa" faz parte;
	val_d - valor real do campo;
	*val_s - valor string do campo;
*/

typedef struct
{
	int id_tab, id_campo, id_geral;
	int val_i;
	double val_d;
	char *val_s;	
}bloco;

struct elemento
{
   bloco dados;
    struct elemento *prox;
}; //definindo que cada elemento da lista posui os dados de um aluno e aponta para o prox

typedef struct elemento* Lista; //definindo a cabeca q ira apontar para os elementos
typedef struct elemento Elem; //disendo q cada elemento se chamara Elem


typedef struct
{
    int id;
    char *nome;
}indx;

int indexacao(char *, int);
int salvar(bloco *);
Lista* CriaL();
void LiberaL(Lista*);
int insere_do_arq(Lista *);
int insereL(Lista*, bloco);

int main ()
{
	return 0;
}

int indexacao(char *name, int id) // nome = Chave 1,  ID posição (incremntal) | criar index de cada tabela
{
	 //arquivo index
    FILE *pt_indx = fopen("index.bin", "wb");         //abrindo arquivo para escrita
    indx *novo_ind;
    novo_ind = malloc(sizeof(indx));
    if(!novo_ind)
        printf("erro de alocacao! \n"); exit(-1);

    //salvado no arquivo pra index
    novo_ind->id = id;
    novo_ind->nome = malloc((strlen(name)+1) * sizeof(char));
    novo_ind->nome = name;

    fwrite(&novo_ind, sizeof(index), 1, pt_indx);
    fclose(pt_indx);
    free(novo_ind);

    //fazer retorno
}

int salvar(bloco *thing)
{

	/*parte de escolha de qual arquivo.bin | FELIPE
		fazer seleção por Iid_tab (para saber a tabela)
	*/
	FILE *pt_arq = fopen("arquivo.bin", "wb"); // mudar de aquivo bin de acordo com o parâmetro tab_id Felipe que vai fazer
	bloco *novo_arq;
	novo_arq = malloc(sizeof(bloco));
    if(!novo_arq)
    	printf("erro de alocacao! \n"); exit(-1);
    novo_arq->id_tab = thing->id_tab;
    novo_arq->id_campo = thing->id_campo;
    novo_arq->id_geral = thing->id_geral;
    novo_arq->val_i = thing->val_i;
    novo_arq->val_d = thing->val_d;
    novo_arq->val_s = malloc((strlen(thing->val_s)+1) * sizeof(char));
    novo_arq->val_s = thing->val_s;

 	fwrite(&novo_arq, sizeof(bloco), 1, pt_arq);                  
    fclose(pt_arq);
    free(novo_arq);  
    //fazer retorno
    
}

Lista* CriaL()
{
    Lista* li; //criando a cabeca da lista
    li = (Lista*) malloc(sizeof(Lista)); //fazendo a cabeca apontar bara alguem
    if(li != NULL) //foi bem sucedido?
        *li = NULL; //acabei de criar, portanto ela ta vazia
    return li;
}


void LiberaL(Lista* li)
{ //libera a lista por completo
    if(li != NULL)
    { //tem algum elemento na lista?
        Elem* aux; //criando ponteiro auxiliar para apontar para o elemento que eu quero remover
        while((*li) != NULL)
        { //minha cabeca aponta para o final (vazio, null?)
            aux = *li; //auxiliar vai apontar para o mesmo elemento que a minha cabeca aponta
            *li = (*li)->prox; //minha cabeca vai apontar para o o mesmo lugar que o o elemento prox que ela aponta apontar
            free(aux); //liberando o auxiliar (primeiro elemento da lista)
        }
        free(li); //toda memoria foi liberada
    }
}



int insereL(Lista *li, bloco coisa) //falta coisas
{ // carregar a lista com arquivos salvos, para depois fazer a consulta do nome. no main passar os arquivos

    if(li == NULL) // a lista eh valida (esta vazia) ?
        return 0;
    Elem *no; //criando ponteiro para elemento a ser inserido
    no = (Elem*) malloc(sizeof(Elem)); // alocando elemento
    if(no == NULL) 
        return 0;
    no->dados = coisa; //recebe os dados da coisa que eu mandei como parametro
    no->prox = NULL; //apontando pra null pq ele é no fim da lista
    if((*li) == NULL){//lista vazia: insere início
        *li = no;
    }else{
        Elem *aux; //criando um ponteiro auxiliar
        aux = *li; //apontar para o mesmo lugar q a cabeca aponta (inicio da lista)
        while(aux->prox != NULL){ //percorrer ate achar o ultimo elemento (o q aponta pra null)
            aux = aux->prox;
        }
        aux->prox = no; //quando eu encontrei, faço meu prox do ultimo elemento apontar pro no que eu quero inserir
    }
    return 1; // consegui fazer tudo (dúvida, tiro?)
}

//inserindo arquivos bin na lista
int insere_do_arq(Lista *li)
{
    FILE *pt_arq = fopen("arquivo.bin", "rb");         //abrindo arquivo para leitura
    bloco *novo_arq;
    novo_arq = malloc(sizeof(bloco));
    if(!novo_arq)
        printf("erro de alocacao! \n"); exit(-1);

    fread(novo_arq, sizeof(bloco),1 ,pt_arq); // ou &novo_arq
    return (insereL(li, novo_arq));

    //lembrar de fechar fluxo
}


int Lvazia(Lista* li){
    if(li == NULL) //lista valida? existe?
        return 1;
    if(*li == NULL) //lista vazia
        return 1;
    return 0; //tem algum
}


