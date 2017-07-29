#include <stdio.h>
#include "help.h"
#include "interpretar.h"

int main( int argc, char *argv[ ] )
{
	if(argc == 1)
		help(0);
	else
		interpretar(argc, argv);
	return 0;
}
