#include <stdio.h>
#include <stdlib.h>

int exercicio2() {
	printf("\n\nExercicio 2\n");
	int numeroValor;
	int numeroTaxa;
	int numeroTempo = 5;
	printf("Digite um numero para o valor: ");
	scanf("%i", &numeroValor);
	printf("Digite outro numero para a taxa: ");
	scanf("%i", &numeroTaxa);
	int prestacao;
	prestacao = (numeroValor + ((numeroValor * (numeroTaxa/100)) * numeroTempo));
	printf("O valor da prestacao em %i meses e = %i",numeroTempo,prestacao);
	return 0;
}
