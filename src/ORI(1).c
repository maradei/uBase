#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//protótiopo base

typedef struct
{
	char n[256];
}bloco;

typedef struct
{
    int id;
    char *nome;
}index;

bloco *build_tab(int);
int inserir(char *, int, int, int);
int indexacao(char *, int);
//dado pesquisa(int id);
/*
//para testes
int main ()
{
    int quant, i;
    char n[256];
    double v;

    printf("quantidade de insercoes\n");
    scanf("%d",&quant);

    for (i = 0; i < quant; i++)
    {    
        printf("Nome: ");
        scanf("%s",n);
        //printf("\n");
        printf("valor: ");
        scanf("%lf",&v);
        printf("\n");
        if(!inserir(i+1, n, v))
            printf("Erro"); exit(-1);
    }
	return 0;
}
*/

//construir a tabela com os campos
bloco *build_tab(int tam)
{
	bloco *vet_tab;

	vet_tab = (bloco*) malloc(tam * sizeof(bloco));
	if(!vet_tab)
		printf("Erro de alocacao!\n"); exit(-1);
	return vet_tab;
}


//inserir a "coisa" na tebela (tab) e campo desejado (posic), tam = quantidade de campos
int inserir(char *coisa, int posic, int tab, int tam)
{
	//arquivos de dados
	FILE *pt_arq = fopen("arquivo.bin", "wb"); // mudar de aquivo bin de acordo com o parâmetro tab Felipe que vai fazer
	bloco *novo_arq;
	novo_arq = malloc(tam * sizeof(bloco));
    if(!novo_arq)
    	printf("erro de alocacao! \n"); exit(-1);

    //salvando a coisa no campo da tabela
    novo_arq[posic] = coisa;

    fwrite(&novo_arq, sizeof(tam * bloco), 1, pt_arq);                  
    fclose(pt_arq);
    free(novo_arq);      

    //lembrar de fazer o retorno de sucesso /falha              
  
}

int indexacao(char *name, int count) // nome = Chave 1, count = ID posição
{
	 //arquivo index
    FILE *pt_indx = fopen("index.bin", "wb");         //abrindo arquivo para escrita
    index *novo_ind;
    novo_ind = malloc(sizeof(index));
    if(!novo_ind)
        printf("erro de alocacao! \n"); exit(-1);

    //salvado no arquivo pra index
    novo_ind->id = count;
    novo_ind->nome = malloc((strlen(name)+1) * sizeof(char));
    novo_ind->nome = name;

    fwrite(&novo_ind, sizeof(index), 1, pt_indx);
     fclose(pt_indx);
    free(novo_ind);
}
/*
dado pesquisa(int id)
{
    FILE *pt_arq = fopen("arquivo.bin", "rb");         //abrindo arquivo para leitura
    dado *novo_arq;
    novo_arq = malloc(sizeof(dado));
    if(!novo_arq)
        printf("erro de alocacao! \n"); exit(-1);

    fseek(pt_arq, sizeof(dado) * id, SEEK_SET) // mover o ponteiro para a posicao do ID ou (id -1)

    fread(novo_arq, sizeof(dado),1 ,pt_arq); // ou &novo_arq

    return novo_arq;
}

*/








