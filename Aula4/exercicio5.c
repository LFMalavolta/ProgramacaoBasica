#include <stdio.h>
#include <stdlib.h>

int exercicio5() {
	printf("\n\nExercicio 5\n");
	int salario;
	int reajuste;
	printf("Digite o salario: ");
	scanf("%i", &salario);
	reajuste = salario + (salario * (15.5/100));
	printf("Novo salario = %i",reajuste);
	return 0;
}
