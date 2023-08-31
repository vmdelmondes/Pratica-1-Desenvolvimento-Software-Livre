/*app -> (standard output, standard input, standard error)

standard output = 1
standard input = 0
standard error = 2
*/

/*
Dúvidas:
1) O hello.c tem inclued dos headers, mas em momento algum se faz referência ao MyFunctions.c e ao MyFcuntions2.c. Como o código sabe como executar as funções? Em qual momento acontece esse link?

2) oq aconteceu com a makefile? o que é main, ALL e $@? O que é $(ALL)?
*/

#include <stdio.h>
#include <math.h>
#include "MyFunctions.h"
#include "MyFunctions2.h"



int main() {

	printf("SEL0456 Trabalho 1\n");
	double f = 1.234;
	printf("f1 de %g = %g\n", f, f1(f));
	printf("f2 de %g = %g\n", f, f2(f));
	fprintf(stderr, "Erro aqui\n");
	
	return 0;

}



