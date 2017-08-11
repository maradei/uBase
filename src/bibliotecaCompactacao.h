/****
*
* TÍTULO: Função de descompactação Run length Encode.
*
* AUTOR: Tulio Campos	
*
* DATA DA CRIAÇÃO: 09/09/2017
* ÚLTIMA MODIFICAÇÃO: 09/09/2017
*
* DESCRIÇÃO: Esta função recebe o nome do arquivo/tabela, no qual contém os dados a serem compactados e gera um arquivo com os dados compactados.   
* Nesse tipo de compactação se um item X aparece * N vezes conecutivas nos dados originais, então, essas n ocorrências podem ser substituídas por um 
* par nx. Para evitar confusão com os dígitos
* numéricos foi usado o caracter '#' no inicio e no fim de cada par nx.
* Exemplo:
* String: AAABBACCCDDEEEEEF
* Comprimida: “#3A##2BA##3C##2D##5E#F”
*
* PARÂMETROS: - (char*): O nome do arquivo/tabela a ser compactado. 
*
* VALOR DE RETORNO: - (void): 
****/
void runLengthEncodeComp(char *);
