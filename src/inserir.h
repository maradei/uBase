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

void inserir(int, char**);
