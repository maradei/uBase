/****
*
* TÍTULO: Função de Descompactação Run Length Enconde
*
* AUTOR:Tulio Campos  
*
* DATA DA CRIAÇÃO: 09/08/2017
* ÚLTIMA MODIFICAÇÃO: 09/08/2017
*
* DESCRIÇÃO: Funcão de descompactação, esta função recebe o nome do arquivo/tabela, no qual contém os dados compactados e gera um 
* arquivo com os dados descompactados.   
* Nesse tipo de descompactação se é encontrado '#', indica o inicio de uma sequência de repetição de um caractere X. Sabe-se que os n-2 próximos
* caraceteres correspondem a quantidade de vezes que X se repete, sendo o (n-1)-ésimo o próprio x, e o n-ésimo o '#' que é o caracter limitador de uma
* sequência de repetição. Senão for encotrado o '#' indica que o caractere lido não se repete.  
* 
* PARÂMETROS: -(char*): O nome do arquivo/tabela a ser compactado.  
*
* VALOR DE RETORNO: - (void): 
****/ 

void runLengthEncodeDescomp(char *);
