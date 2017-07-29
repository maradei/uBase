#include <stdio.h>

void help(int op){
	switch(op){
		case 0:
			printf("-b,\t-buscar\t\t\tBusca um registro de uma tabela\n");
			printf("-c,\t-criar\t\t\tCria uma nova tabela no banco de dados\n");
			printf("-cmp,\t-compactar\t\tCompacta os registros de uma tabela\n");
			printf("-dcmp,\t-descompactar\t\tDescompacta os registros de uma tabela compactada\n");
			printf("-cpt,\t-criptografar\t\tCriptografa uma tabela\n");
			printf("-dcpt,\t-descriptografar\tDescriptografa uma tabela\n");
			printf("-h,\t-help\t\t\tExibe informaçãoes sobre um comando\n");
			printf("-i,\t-inserir\t\tInsere em uma Tabela um campo ou registro\n");
			printf("-o,\t-ordenar\t\tOrdena uma tabela\n");
			printf("-r,\t-remover\t\tRemove uma tabela, campo ou registro\n");
			break;
		case 1: //Buscar
			printf("-b, -buscar nome_arquivo -id x\t\t\t Busca o registro com o id x\n");
			printf("-b, -buscar nome_arquivo.nome_atributo -valor x\t Busca o(s) registros com o valor x no atributo nome.atributo\n");
			break;
		case 2: //Criar
			break;
		case 3: //Compactar
			printf("-cmp, -compactar nome_arquivo -tipo tipo_ordenação\tCompacta um arquivo\n");
			break;
		case 4://Descompactar
			printf("-dcmp, -descompactar nome_arquivo\t Descompacta um arquivo do banco\n");
			break;
		case 5://Criptografar
			printf("-cpt, -criptografar nome_arquivo\t\tCriptografar um arquivo\n");
			printf("-cpt, -criptografar nome_arquivo.nome_atributo\tCriptografa os valores de atributos no arquivo\n");
			break;
		case 6://Descriptografar
			printf("-dcpt, -descriptografar nome_arquivo -tipo tipo\t\t\tDescriptografar um arquivo\n");
			printf("-dcpt, -descriptografar nome_arquivo.nome_atributo -tipo tipo\tDescriptografar os valores de atributos no arquivo\n");
			break;
		case 7://Inserir
			printf("-i, -inserir nome_arquivo.nome_atributo -valor x -id y\tInsere o valor y no campo nome.atributo onde id = x\n");
			printf("-i, -inserir nome_arquivo.nome_atributo -valor x -id y\tInsere o valor \"texto\" no campo nome.atributo onde id = x\n\n");
			break;
		case 8://Ordenar
			printf("-o, -ordenar nome_arquivo.nome_atributo -ordem ordem\tOrdena os registros pelo Atributo\n");
			break;
		case 9://Remover
			printf("-r, -remover nome_tabela\t\t\t\tRemove uma tabela\n");
			printf("-r, -remover nome_tabela.campo\t\t\t\tRemove um campo da tabela\n");
			printf("-r, -remover nome_tabela.nome_campo -nome_registro\tRemove um registro\n");
			break;
		default:
			break;
		
	}
}
