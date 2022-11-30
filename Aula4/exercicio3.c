#include <stdio.h>
#include <stdlib.h>

int exercicio3() {
	printf("\n\nExercicio 3\n");
	int a = 5;
	int b = 6;
	int temp;
	printf("Valores inicias: a = %i e b = %i\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("Valores apos a troca: a = %i e b = %i", a, b);
	return 0;
}
