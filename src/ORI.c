#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//protótiopo base

int inserir(int count, char *name, double val);
dado pesquisa(int id);

typedef struct
{
	int id;
	char *nome;
	double valor;
}dado;

typedef struct
{
    int id;
    char *nome;
}index;


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


//inserção com indexação simples (incremento do ID)
int inserir(int count, char *name, double val)
{
	//arquivo dados
    FILE *pt_arq = fopen("arquivo.bin", "wb");         //abrindo arquivo para escrita
    dado *novo_arq;
    novo_arq = malloc(sizeof(dado));
    if(!novo_arq)
    	printf("erro de alocacao! \n"); exit(-1);

    //arquivo index
    FILE *pt_indx = fopen("index.bin", "wb");         //abrindo arquivo para escrita
    index *novo_ind;
    novo_ind = malloc(sizeof(index));
    if(!novo_ind)
        printf("erro de alocacao! \n"); exit(-1);

    //salvando no arquivo pra dados
    novo_arq->id = count;
    novo_arq->nome = malloc((strlen(name)+1) * sizeof(char));
    novo_arq->nome = name;
    novo_arq->valor = val;
    
    //salvado no arquivo pra index
    novo_ind->id = count;
    novo_ind->nome = malloc((strlen(name)+1) * sizeof(char));
    novo_ind->nome = name;

    fwrite(&novo_ind, sizeof(index), 1, pt_indx);
    fwrite(&novo_arq, sizeof(dado), 1, pt_arq);                    //fechamento
    fclose(pt_indx);
    free(novo_ind);                    //fechamento
    fclose(pt_arq);
    free(novo_arq);
}

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









