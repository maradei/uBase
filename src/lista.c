#include <stdio.h>
#include <stdlib.h>

typedef struct info{
    int id;
    char nome[256];
}info; //fazendo estrutura dado para armazemar o ID relacionado ao nome

struct elemento{
   info dados;
    struct elemento *prox;
}; //definindo que cada elemento da lista posui os dados de um aluno e aponta para o prox

typedef struct elemento* Lista; //definindo a cabeca q ira apontar para os elementos
typedef struct elemento Elem; //disendo q cada elemento se chamara Elem

//funcoes
Lista* CriaL();
void LiberaL(Lista*);
int ConsultaNome(Lista*, char *);
int InsereL(Lista*, info);
int Lvazia(Lista*);



int main(){
  
    return 0;
}

//(*li) = o que ele aponta
// *li o que esta sendo apontado

Lista* CriaL(){
    Lista* li; //criando a cabeca da lista
    li = (Lista*) malloc(sizeof(Lista)); //fazendo a cabeca apontar bara alguem
    if(li != NULL) //foi bem sucedido?
        *li = NULL; //acabei de criar, portanto ela ta vazia
    return li;
}


void LiberaL(Lista* li){ //libera a lista por completo
    if(li != NULL){ //tem algum elemento na lista?
        Elem* aux; //criando ponteiro auxiliar para apontar para o elemento que eu quero remover
        while((*li) != NULL){ //minha cabeca aponta para o final (vazio, null?)
            aux = *li; //auxiliar vai apontar para o mesmo elemento que a minha cabeca aponta
            *li = (*li)->prox; //minha cabeca vai apontar para o o mesmo lugar que o o elemento prox que ela aponta apontar
            free(aux); //liberando o auxiliar (primeiro elemento da lista)
        }
        free(li); //toda memoria foi liberada
    }
}



int ConsultaNome(Lista* li, char *nome){ //completa
    Elem *aux;
    if(li == NULL) //lista eh valida (possui elementos)?
        return 0;
    aux = *li; //auxiliar vai apontar para o mesmo elemento que a minha cabeca aponta
    while(aux != NULL && aux->dados.nome != nome){ //cheguei no fim? achei o nome?
        aux = aux->prox; //aponta para o prox elemento
    }
    if(aux == NULL) //caso eu nao achei o nome
        return 0; // colocar msg de erro?
    else
        return aux->dados.id; // retornar ID 
}


int InsereL(Lista* li, info coisa){ // carregar a lista com arquivos salvos, para depois fazer a consulta do nome. no main passar os arquivos
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


int Lvazia(Lista* li){
    if(li == NULL) //lista valida? existe?
        return 1;
    if(*li == NULL) //lista vazia
        return 1;
    return 0; //tem algum
}

