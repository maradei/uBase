/****
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
* Descrição: A função lê os parâmetros no formato (> uBase –inserir) NOME_ARQUIVO.NOME_ATRIBUTO –valor –id. 
* A função é executada analisando os parâmetros ,que trazem um valor após o campo "-valor" que podem ser um inteiro, ou float ou char,
* e salvando o parâmetro que vem após "–valor" na tabela indicado pelo parâmetro "NOME_ARQUIVO"campo indicado pelo parâmetro 
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
//estrutura geral de cada bloco da tabela
typedef struct bloco
{
	int id_tab, id_campo, id_geral;
	int val_i;
	double val_d;
	char val_s[256];
	int typ; // 1 = int, 2 = dou, 3 = string/char
}bloco;

//estrutura para armazenar o parâmetros 
typedef struct Parametro
{
    char nomeDoArquivo[256];
    char campo[256];
    char valor[256];
    int idgeral;
}Parametro;

typedef struct Tabela
{
       char *nome;
       int id;
}Tabela;

//estrutra para coletar inicialmente os parâmetros no momemento da inserção dos proprios
typedef struct coleta
{
	char *nome_tab_camp_arg;
	char *val_arg;
	char *id_arg;
}coleta;

/****
*
* Título: inserir
*
* Autor: Marcos Rogerio
*
* Data de Criação: 07/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: aloca devidamente cada elemento que foi enviado como parâmetros pelo usuário, colocando cada um dos parâmetros em variáveis da 
* estrutura Parametro da seguinte forma,  a variável nomeDoArquivo recebe o valor de "NOME_ARQUIVO", a variável campo recebe o valor de 
* "NOME_ARQUIVO", a variável valor recebe o valor que está após "-valor" e idgeral recebe o valor que está após "-id".   
*
*
* Parâmetros: um inteiro, contendo a quantidade de argumentos, e os argumentos
* Valor de retorno: 1 para sucesso e 0 para falha
*
****/

int inserir(int, char**);

/****
*
* Título: verifica
*
* Autor: Marcos Rogerio
*
* Data de Criação: 07/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: verifica se os dados que foram tratados pela função recebe, realmente condizem com alguma tabela existente, a função compara os dados
* da estrutura Parametro que foi recebido com um arquivo binário que contem os dados das tabelas que foram criadas, a função checa se a tabela e o campo que foram
* inseridos pelo usuário, realmente existem fazendo as devidas comparações com os dados do arquivo tabelas.bin.
*
*
* Parâmetros: recebe uma estrutura do tipo Parametro, com os dados que foram alocados na estrutura Parametro que contém os dados  que foram 
* inseridos pelo usuário. 
*
* Valor de retorno: retorna 1 caso a tabela e campo existam e 0 caso contrário
*
****/

int verifica(struct Parametro *);


/****
*
* Título: Insere Valor
*
* Autor: Marcos Rogerio
*
* Data de Criação: 05/06/ 2017
* Última modificação: 17/ 08/ 2017
*
* Descrição: insere um valor no campo, do tipo que foi referido no ID do tipo
*
* Parâmetros: estrutura do tipo bloco (aonde estou salvando todos os dados da inserção) e tipo Parametro (aonde contem
* os dados coletados do usuário)
*
* Valor de retorno:  estrutura do tipo bloco
*
****/


int insere_valor(bloco *,struct Parametro *);
