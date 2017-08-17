#include <stdlib.h>
#include <string.h>
int criar(int, char**);
char* alocaMemoria(int, char*);
int inserir(int, char**);
void criaArquivo(int, char**);
void separa(char**);

typedef struct
{
	int id_tab, id_campo, id_geral;
	int val_i;
	double val_d;
	char *val_s;
	int typ;
    int ponteiro;
	 // 1 = int, 2 = dou, 3 = string/char
}bloco;

typedef struct
{
    char *nomeDoArquivo;
    char *campo;
    char *tipo;
    int idgeral;
}Parametro;

typedef struct
{
    char *nome;
    int id;
}Tabela;

int main( int argc, char *argv[])
{
    criar(argc, argv);
    inserir(argc, argv);
    return 0;
}

int criar(int argc, char* argv[])
{
    FILE* stream;
    Tabela *ptr;

    stream = fopen(argv[2], "wb");
    ptr = malloc(sizeof(Tabela));

    ptr.id += 1;
    ptr.nome = argv[2];

    return 1;
}


char* alocaMemoria(int tam, char* ptrC)
{
    ptrC = malloc((sizeof(char) * tam) + 4);
    if(ptrC == NULL)
    {
        printf("Erro de Alocação ! (função Criar)");
        exit(-1);
    }
    return ptrC;

int inserir(int argc, char* argv[])
{
    separa(argv);


}

void separa(char** argv)
{
    int i = 0, j = 0, flag = 0;
    char * nomeAtributo;

    nomeAtributo = malloc(sizeof(char) * 100);

    for(i = 0; argv[2][i] != '.';i++)

}
