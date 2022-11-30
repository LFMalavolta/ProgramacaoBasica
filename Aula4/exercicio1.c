#include <stdio.h>
#include <stdlib.h>

int exercicio1() {
	printf("Exercicio 1\n");
	int numero1;
	int numero2 ;
	printf("Digite um numero: ");
	scanf("%i", &numero1);
	printf("Digite outro numero: ");
	scanf("%i", &numero2);
	int mediaNumeros = (numero1 + numero2)/2;
	printf("A media dos numeros: %i",mediaNumeros);
	return 0;
}
