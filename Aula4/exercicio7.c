#include <stdio.h>
#include <stdlib.h>

int exercicio7() {
	printf("\n\nExercicio 7\n");
	int publico = 56000;
	int ingressoPopular = 10* (publico * (20.0/100));
	int ingressoGeral = 15 * (publico * (50.0/100));
	int ingressoCadeiras = 25 * (publico * (30.0/100));
	printf("Valor arrecadado = R$ %i", ingressoPopular + ingressoGeral + ingressoCadeiras);
	return 0;
}
