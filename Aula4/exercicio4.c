#include <stdio.h>
#include <stdlib.h>

int exercicio4() {
	printf("\n\nExercicio 4\n");
	int numeroComprimento;
	int numeroLargura;
	int numeroAltura;
	printf("Digite um numero para o comprimento: ");
	scanf("%i", &numeroComprimento);
	printf("Digite outro numero para a largura: ");
	scanf("%i", &numeroLargura);
	printf("Digite outro numero para a altura: ");
	scanf("%i", &numeroAltura);
	int volume;
	volume = numeroComprimento * numeroLargura * numeroAltura;
	printf("Volume calculado = %i",volume);
	return 0;
}
