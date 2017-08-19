#include <stdio.h>
#include "bibliotecaCompactacao.h"
#include "help.h"
#include "fptrCompactar.h"
#include "huffman.h"

void compactar(char *nome, fptrCompactar fCompactar){
	if(fCompactar != NULL){
		fCompactar(nome);
	}
}
