#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inserir.h"



int inserir(int n1, char *argv[])
{
	coleta arquivo; // pegar os parametros do argv

	arquivo.nome_tab_camp_arg = argv[2]; //
	arquivo.val_arg = argv[4];
	arquivo.id_arg = argv[6];

	int i = 0, resp;
    char *vetor;
    Parametro novo;
	char *aux;
	int tam = strlen(arquivo.nome_tab_camp_arg); // mede o tamanho do nome da tabela
    aux = (char*) malloc(tam * (sizeof (char))); // aloca com tamanho do nome da matriz
    if(aux == NULL)
        return 0;
    aux = arquivo.nome_tab_camp_arg;
    
    while(*aux != '.') // pegando nome do arquivo, o palavra até o . ex:"CASA.cor"
    { 
        novo.nomeDoArquivo[i] = *aux;
        aux++;
        i++;
    }
    novo.nomeDoArquivo[i] = '\0'; //final da nova string
    aux++; // ando o ponto que divide as palavras
    i=0;
    while(*aux != '\0'){// pegando o nome do campo ex:"casa.COR", ate o fim da string "NOME_ARQUIVO.NOME_ATRIBUTO"
        novo.campo[i] = *aux;
        aux++;
        i++;
    }
    i = 0;
    novo.campo[i] = '\0';
    while(arquivo.val_arg != '\0')
    {
    	novo.valor[i] = arquivo.val_arg[i];
    	i++;
    }
    //strcopy(novo.valor,arquivo.val_arg); //pegando o valor a ser inserido
    vetor = (char*) malloc(10 * (sizeof(char)));
    if(vetor == NULL) 
        return 0;
    
    vetor = arquivo.id_arg; // pegando o ID digitado pelo usuário aonde ele deseja fazer a inserção
    novo.idgeral = atoi(vetor); // trasformando a string em inteiro
    free(vetor);// liberando o ponteiro alocado
    vetor = NULL;

    //novo esta como os parâmetros para inserção, Nome da tabela, nome de campo, valor e ID geral do "bloco"
     return (verifica(&novo)); //falta comentar
}


int verifica(struct Parametro *p){ 
	int tam;
    FILE *pt_tab = fopen("tabelas.bin", "rb");         //abrindo arquivo para leitura com informações da tebelas
    if(pt_tab == NULL)    //verificação 
        return 0;
    struct Tabela tab;   // estrutra com tipo nome e id 	
    char vetor[10];
    struct bloco *novo; //estrutura geral de cada bloco da tabela
    novo = (bloco*)malloc(sizeof(bloco));
    if(novo == NULL) 
        return 0;
    int flag = 1; //flag para verificação da existência da tabela
    tam = 256;
    while(!feof(pt_tab)|| flag == 1){ //enquanto nao for fim de arquivo e flag for 1, eu ando procurando o nome da tebela
        fread(tab.nome,sizeof(char),tam, pt_tab);// pego um nome do arquivo de tabelas, esperando que os nomes tenham no máximo 256 c
        if((strcmp(tab.nome,p->nomeDoArquivo)) != 1){ //comparo o nome da tabela com o nome que foi inserido pelo usuário
        	fseek(pt_tab, sizeof(int), SEEK_SET); //ando 4 bytes, ando o valor do ID do campo que não é o certo
        }else { 
            flag = 0;//se os nomes forem iguais, zero flag, para indicar que a tabela existe
           fread(&novo->id_tab, sizeof(int),1,pt_tab); // como a tabela foi encontrada, agora pego o ID dela <<<<<<<<<<<( aqui pego ID)
        }  
    }
    if(flag == 1){ //se flag ainda for  = 1, pq a tabela nao foi encontrada
       //puts("ERRO!, Tabela não existe, por favor criar tabela"); // arquivo tabelas foi percorrido e nao foi achado a tabela informada nos parâmetros
       return 0; //retorno 0 indicando erro
   }
   	fclose(pt_tab);
    FILE *pt_camp = fopen("campos.bin","rb"); //abrindo arquivo de campos referente 
    if(pt_camp == NULL)    //verificação 
        return 0;
    flag = 1; //flag para verificação da existência do campo 
    while(!feof(pt_camp) || (flag == 1)){ //
           fread(tab.nome,sizeof(char),tam,pt_camp);//pego um nome do arquivo de campos
        if((strcmp(tab.nome,p->campo))!= 1){	fclose(pt_tab);
        	fseek(pt_camp, sizeof(int), SEEK_SET); //ando 2 inteiros, o tipo e o ID do campo que eu não quero
        	fseek(pt_camp, sizeof(int), SEEK_SET);
        }else{
            flag = 0; //se os nomes forem iguais, zero flag, para indicar que o campo existe
            fread(&novo->typ, sizeof(int),1, pt_camp);     // pego o tipo do campo <<<<<<<<<<<( aqui pego tipo)
        	fread(&novo->id_campo, sizeof(int),1, pt_camp); // pego o ID do campo para fazer a inserção <<<<<<<<<<<( aqui pego ID do CAMPO)
        }                                                  // copiando tipo do campo, e o id do campo
        
    }
    if(flag != 0){ // se flag ainda for  = 1, pq campo nao foi encontrado
    	//puts("ERRO!, Campo não existe por favor criar campo");
    	return 0;
    }

    fclose(pt_camp);//fecho o arquivo de campos
    
    novo->id_geral = p->idgeral; // aqui, tenho todos os dados necessários de reconhecimento do bloco no arquivo bin
    if(insere_valor(novo, p)){ // se tudo der certo, eu salvo o que foi passado pelo usuário <<<<<<<<<<<( aqui pego VALOR)
   		FILE *pt_Arq = fopen("arquivo.bin", "wb");         //abrindo arquivo para leitura com informações da tebelas
    	if(pt_Arq == NULL)    //verificação 
        	return 0;
    	fwrite(novo, sizeof(bloco),1, pt_Arq); //salvando o bloco com todas as informações no banco de dados " geral"
    	fclose(pt_Arq);
		return 1; // operação ocorreu com sucesso
	}
	return 0;
}


int insere_valor(bloco *n, Parametro *p){
    int j = 0;

    if(n->typ == 1)
    {
    	n->val_i = atoi(p->valor); // se tipo int
        return 1;
    }
    if(n->typ == 2)
    {
    	n->val_d = atof(p->valor); // se tipo int
        return 1;
    }
    if(n->typ == 3){
    	while(p->valor != '\0'){
    		n->val_s[j] = p->valor[j];
    	}
    	//strcopy(n->val_s,p->valor); //se tipo string
        return 1;
    }else{
    return 0;
    }
}


