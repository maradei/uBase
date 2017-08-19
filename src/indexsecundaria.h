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
 *  Titulo:indexsecundaria.
 *
 *  Data de criação:05/07/2017.
 *  Ultima modificação: 16/08/2017.
 *
 *  Descrição: a função irá receber um arquivo indexado por chave primaria e ultilizando do algoritmo de indexação secundaria vai gerar um arquivo contendo
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
 *  Titulo:ordenalistaprimaria.
 *
 *  Data de criação:10/07/2017.
 *  Ultima modificação: 08/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para a lista Li_index e como resultado vai ordenar a lista em ordem crescente atravès do id do dado.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: ordena a lista,retorna a void.
 */
void ordenarlistaprimaria(Li_index *);
/*
 *  Titulo:ordenalistasecundaria.
 *
 *  Data de criação:12/07/2017.
 *  Ultima modificação: 08/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para a lista Li_index e como resultado vai ordenar a lista em ordem crescente atravès do valor que conter no atributo.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno:ordena a lista, retorna a void.
 */
void ordenarlistasecundaria(Li_index *);
/*
 *  Titulo:pegaratributo.
 *
 *  Data de criação:07/07/2017.
 *  Ultima modificação: 10/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para ponteiro do tipo File que contém o arquivo já aberto que será utilizado, e vai coletar o ed e o bloco referente
 *  ao campo selecionado e adicionar na lista de blocos.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index, um ponteiro para ponteiro para um tipo File que contém o arquivo a ser ultilizado,um inteiro
 *  contendo o numero do campo escolhido(sua posição), eum inteiro contendo o quantidade dos atributos.
 *
 *  Retorno: retorna a void.
 */
void pegaratributo(FILE **,Li_index *,int , int );
/*
 *  Titulo:criarlista.
 *
 *  Data de criação:12/07/2017.
 *  Ultima modificação: 14/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e ira inicializar a lista deste tipo.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: retorna a void.
 */
void criarlista(Li_index *);
/*
 *  Titulo:inserilista.
 *
 *  Data de criação:12/07/2017.
 *  Ultima modificação: 14/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e um tipo struct Index que contém os dados que foi obtido na coleta ao arquivo
 *  e vai inseri-lo na lista.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index, e um tipo struct Index que contém os dados do bloco e o ed.
 *
 *  Retorno: retorna a void.
 */
void inserilista(Li_index * ,Index * );
/*
 *  Titulo:ehvazia.
 *
 *  Data de criação:12/07/2017.
 *  Ultima modificação: 12/07/2017.
 *
 *  Descrição: a função irá receber um ponteiro para ponteiro do tipo Li_index, e checa se a lista é vazia ou não.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct.
 *
 *  Retorno: retorn 1 se for verdade, e 0 o contrario.
 */
int ehvazia(Li_index *);
/*
 *  Titulo:freelistaindex.
 *
 *  Data de criação:12/07/2017.
 *  Ultima modificação: 10/08/2017.
 *
 *  Descrição: a função irá receber um ponteiro para ponteiro de Li_index,e libera ele da memoria.
 *
 *  Parametros: recebe uma lista encadeada da estrutura struct Index.
 *
 *  Retorno: retorna vazio.
 */
void freelistaindex(Li_index * );
void pegarlista(Lista *,FILE *);// função que nassin~ficou de fazer;