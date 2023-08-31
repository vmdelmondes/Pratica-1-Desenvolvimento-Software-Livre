/*app -> (standard output, standard input, standard error)

standard output = 1
standard input = 0
standard error = 2
*/

#include <stdio.h>
#include <math.h>

int main() {

	printf("SEL0456 Trabalho 1\n");
	double f = 1.234;
	printf("f1 de %g = %g\n", f, f1(f));
	fprintf(stderr, "Erro aqui\n");
	
	return 0;

}

