#include <stdio.h>
#include <stdlib.h>

int exercicio8() {
	printf("\n\nExercicio 8\n");
	int numeroA = 2;
	int numeroB = 4;
	int numeroC = 3;
	int bhaskaraPositva = (-numeroB +((numeroB^2) - (4*numeroA*numeroC)))/ (2*numeroA);
	int bhaskaraNegatva = (-numeroB -((numeroB^2) - (4*numeroA*numeroC)))/ (2*numeroA);
	printf("valores da  bhaskara = %i e %i", bhaskaraPositva, bhaskaraNegatva);
}
