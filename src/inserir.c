/**** // OK
*
*
*
* Título: Função Insere
*
*
* Autor: Marcos Rogerio
*
*
* Data de Criação: 05/06/ 2017
* Última modificação: 17/ 08/ 2017
*
*
* Descrição: A função recebe uma string que contém os parâmetros no formato (> uBase –inserir) NOME_ARQUIVO.NOME_ATRIBUTO –valor –id. 
* A função é executada analisando os parâmetros ,que trazem um valor após o campo "-valor" que podem ser um inteiro, ou float ou char,
* e salvando o parâmetro que vem após "–valor" na tabelaindicado pelo parâmetro "NOME_ARQUIVO", no campo indicado pelo parâmetro 
* "NOME_ATRIBUTO" na posição indicado pelo parâmetro que vem após "–id"  na tabela indicada pelo parâmetro "NOME_ARQUIVO" 
*
*
* Parâmetros: ... (entrada): 1 valor string que  representa 4 parâmetros, nome da tabela "NOME_ARQUIVO", nome do 
* campo "NOME_ATRIBUTO", o valor que será inserido que vem após "–valor" e a posição dessa inserção na tebela, que vem após "–id"
*
*... (saída) o valor é salvo em aquivo binário, não retornando valores de algum tipo de operação;
*
*... (entrada/saída): [descrição do parâmetro]
*
*
* Valor de retorno: A função retorna um valor inteiro de verificação de erro ao tentar inserir o elemento, "1" para sucesso na inserção,
* "0" para falha na inserção, "ERRO!, Tabela não existe por favor criar tabela" caso a tabela na qual foi feita a tentativa de inserção,
* não exista.
* "ERRO!, Campo não existe por favor criar campo" caso o campo no qual foi feita a tentativa de inserção, não exista.
* "ERRO, ABERTURA DE ARQUIVO" caso ocorra algum erro na abertura do arquivo binário;
*
****/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura geral de cada bloco da tabela
typedef struct
{
	int id_tab, id_campo, id_geral;
	int val_i;
	double val_d;
	char *val_s;
	int typ; // 1 = int, 2 = dou, 3 = string/char
}bloco;

//estrutura para armazenar o parâmetros 
typedef struct
{
    char *nomeDoArquivo;
    char *campo;
    char *valor;
    int idgeral;
}Parametro;

typedef struct
{
       char *nome;
       int id;
}Tabela;

//estrutra para coletar inicialmente os parâmetros no momemento da inserção dos proprios
typedef struct
{
	char *nome_tab_camp_arg;
	char *val_arg;
	char *id_arg;
}coleta;

int *inserir(int, char*);

/****
*
* Título: inserir
*
* Autor: Marcos Rogerio
*
* Data de Criação: 07/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: a função "recebe", recebe a string como parâmetro e a particiona colocando cada um dos parâmetros em variáveis da estrutura Parametro da
* seguinte forma,  a variável nomeDoArquivo recebe o valor de "NOME_ARQUIVO", a variável campo recebe o valor de "NOME_ARQUIVO", a
* variável valor recebe o valor que está após "-valor" e idgeral recebe o valor que está após "-id".   
*
*
* Parâmetros: 1 valor string que  representa 4 parâmetros, nome da tabela "NOME_ARQUIVO", nome do * campo "NOME_ATRIBUTO", o valor que será inserido 
* que vem após "–valor" e a posição dessa inserção na tebela, que vem após "–id.
* 
* Valor de retorno: 1 para sucesso e 0 para falha
*
****/

int verifica(Parametro *); 

/****
*
* Título: verifica
*
* Autor: Marcos Rogerio
*
* Data de Criação: 07/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: verifica se os dados que foram tratados pela função recebe, confere se realmente condizem com alguma tabela existente, a função compara os dados
* da estrutura Parametro que foi recebido com um arquivo binário que contem os dados das tabelas que foram criadas, a função checa se a tabela e o campo que foram
* inseridos pelo usuário, realmente existem fazendo as devidas comparações com os dados do arquivo tabelas.bin.
*
*
* Parâmetros: recebe uma estrutura do tipo Parametro, com os dados que foram retornados pela função "recebe", estrutra que contém os dados  que foram 
* inseridos pelo usuário. 
*
* Valor de retorno: retorna 1 caso a tabela e campo existam e 0 caso contrário
*
****/
struct bloco *insere_valor(bloco *);

/****
*
* Título: Ler Arq
*
* Autor: Marcos Rogerio
*
* Data de Criação: 05/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: insere um valor no campo, do tipo que foi referido no ID do tipo
*
* Parâmetros: estrutura do tipo bloco
*
* Valor de retorno:  estrutura do tipo bloco
*
****/



Parametro *inserir(int n1, char *argv[])
{
	coleta arquivo; // pegar os parametros do argv

	arquivo.nome_tab_camp_arg = argv[2]; //
	arquivo.val_arg = argv[4];
	arquivo.id_arg = argv[6];


    char  *aux = arquivo->nome_tab_camp_arg;
    int i = 0;
    char *vetor;
    Parametro novo;
    int tam = strlen(aux); // mede o tamanho do nome da tabela
    novo.nomeDoArquivo = (char*) malloc(arquivo->nome_tab_camp_arg * (sizeof (char))); // aloca com tamanho do nome da matriz
    if(novo.nomeDoArquivo == NULL)
        return 0;
    while(*aux != '.') // pegando nome do arquivo, o palavra até o . ex:"CASA.cor"
    { 
        novo.nomeDoArquivo[i] = *aux;
        aux++;
        i++;
    }
    novo.nomeDoArquivo[i] = '\0'; //final da nova string
    aux++; // ando o ponto que divide as palavras
    novo.campo = (char*) malloc(arquivo->nome_tab_camp_arg * (sizeof(char))); //medir o tamanho do nome do campo
    if(novo->campo == NULL)
        return 0;
    i=0;
    while(*aux != '\0'){// pegando o nome do campo ex:"casa.COR", ate o fim da string "NOME_ARQUIVO.NOME_ATRIBUTO"
        novo->campo[i] = *aux;
        aux++;
        i++;
    }
    novo.campo[i] = '\0';
    novo.valor = (char*) malloc(arquivo->val_arg * (sizeof(char))); // aloco uma string de tamanho a digitada pelo usuário
    if(novo.valor == NULL)
        return 0;
    novo.valor = arquivo->val_arg; //pegando o valor a ser inserido
    vetor = (char*) malloc(arquivo->id_arg * (sizeof(char)));
    if(vetor == NULL) 
        return 0;
    
    vetor = arquivo->id_arg; // pegando o ID digitado pelo usuário aonde ele deseja fazer a inserção
    novo.idgeral = atoi(vetor); // trasformando a string em inteiro
    free(vetor);// liberando o ponteiro alocado
    vetor = NULL;

    //novo esta como os parâmetros para inserção, Nome da tabela, nome de campo, valor e ID geral do "bloco"
   return verifica(novo); //falta comentar
}

int verifica(Parametro *p){ //recebo a estrutra do tipo parâmetro do recebe com, tabela, nome, valor e ID
	int tam;
    FILE *pt_tab = fopen("tabelas.bin", "rb");         //abrindo arquivo para leitura com informações da tebelas
    if(pt_tab == NULL)    //verificação 
        return 0;
    Tabela tab;   // estrutra com tipo nome e id 	
    char *vetor = (char*) malloc (10*sizeof(char));
    bloco novo; //estrutura geral de cada bloco da tabela
    novo = (bloco*)malloc(sizeof(bloco));
    if(novo == NULL) 
        return 0;
    int flag = 1; //flag para verificação da existência da tabela
    tam = strlen(p->nomeDoArquivo);
    while(!feof(pt_tab)|| flag == 1){ //enquanto nao for fim de arquivo e flag for 1, eu ando procurando o nome da tebela
        fread(tab.nome,sizeof(char),tam, pt_tab)// pego um nome do arquivo de tabelas
        if(strcmp(tab.nome,p->nomeDoArquivo)!) //comparo o nome da tabela com o nome que foi inserido pelo usuário
        	fseek(pt_tab, sizeof(int), SEEK_SET); //ando 4 bytes, ando o valor do ID
        else { 
            flag = 0;//se os nomes forem iguais, zero flag, para indicar que a tabela existe
           fread(novo.id_tab, sizeof(int),1,pt_tab); // como a tabela foi encontrada, agora pego o ID dela <<<<<<<<<<<( aqui pego ID)
        }  
    }
    if(flag ==  1) //se flag ainda for  = 1, pq a tabela nao foi encontrada
       puts("ERRO!, Tabela não existe, por favor criar tabela"); // arquivo tabelas foi percorrido e nao foi achado a tabela informada nos parâmetros
       return 0; //retorno 0 indicando erro
    }
    fclose(pt_tab);//fecho o arquivo das tabelas
    vetor = itoa(tab.id); //converto  inteiro para string
    vetor = strncat(vetor,".bin");// abrindo arquivos com os campos da tabela referente a tab.id, concatenamento id com bin e criando aquivo ID.bin
    pt_tab = fopen(vetor.bin,"rb"); //abrindo arquivo de campos referente 
    flag = 1; //flag para verificação da existência do campo 
    tam = strlen(p->campo);// comparo o nome do campo do arquivo com o nome que foi inserido pelo usuário
    while(!feof(pt_tab) || flag == 1){ //
           fread(pt_tab,sizeof(char),tam,tab.nome)//pego um nome do arquivo de campos
        if(strcmp(tab.nome,p->campo)!)
        	fseek(pt_tab, sizeof(int *2), SEEK_SET); //ando 2 inteiros, o tipo e o campo
        else{
            flag = 0; //se os nomes forem iguais, zero flag, para indicar que o campo existe
            fread(novo.typ, sizeof(bloco),1, pt_tab);     // pego o tipo do campo <<<<<<<<<<<( aqui pego tipo)
        	fread(novo.id_campo, sizeof(bloco),1, pt_tab); // pego o ID do campo para fazer a inserção <<<<<<<<<<<( aqui pego ID do CAMPO)
        }                                                  // copiando tipo do campo, e o id do campo
        
    }
    if(flag ==  1){ // se flag ainda for  = 1, pq campo nao foi encontrado
    	puts("ERRO!, Campo não existe por favor criar campo");
    	return 0;
    }

    fclose(pt_tab);//fecho o arquivo de campos
    novo = insere_valor(novo); // se tudo der certo, eu salvo o que foi passado pelo usuário <<<<<<<<<<<( aqui pego VALOR)
    
    novo.id_geral = p->idgeral; // aqui, tenho todos os dados necessários de reconhecimento do bloco no arquivo bin


	vetor = itoa(tab.id); //converto  inteiro para string
    vetor = strncat(vetor,".bin");// abrindo arquivos com os campos da tabela referente a tab.id, concatenamento id com bin e criando aquivo ID.bin
    pt_tab = fopen(vetor.bin,"rb"); //abrindo arquivo de campos referente 

    vetor = itoa (novo.id_tab); //converto  inteiro ID para string
    vetor = strncat(vetor,".bin"); // abrindo arquivos com a tabela referente a tab.id, concatenamento id com bin e criando aquivo ID.bin
    pt_tab = fopen(vetor.bin,"rb"); //abrindo arquivo de tabela referente
   
    if(pt_tab == NULL){
        puts("ERRO, ABERTURA DE ARQUIVO"); 
     	return 0;
    }
    fwrite(novo, sizeof(bloco),1, pt_tab); //salvando o bloco com todas as informações no banco de dados " geral"

    return 1; // operação ocorreu com sucesso
}


bloco *insere_valor(bloco *n){// atribui o valor inserido pelo usuário no respectivo campo indicado pelo tipo
    
     switch(n->typ){ // verifico o tipo do campo
         case 1:{ 
         	n->val_i = atoi(p->valor); // se tipo int
         	break;
         }case 2:{
         	n->val_d = (double*) p->valor; // se tipo double 
         	break;
         }case 3:{
         	n->val_s = strcopy(n->val_s,p->valor); //se tipo string
         	break;
         }
     }
       
     return n;

}

//faltou função de tratamento caso o usuário quiser inserir algo em um campo que ja tenha algo
