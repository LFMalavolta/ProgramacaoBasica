#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicios(){
	//Exercicio 2:
	printf("Exercicio 2:");
	float A = (18/3/2-1) * 5 - 4 - (2+3+5)/2;
	float B = 26 + 6 - 2 - 127  + sqrt (16);
	float C = sqrt(9) + (15 *2);
	float D = sin(3) * 2;
	float E = pow(2,2);
	printf("A= %f, B= %f, C= %f, D= %f, E= %f", A,B,C,D,E);

	//Exercicio 3:
	printf("\n\nExercicio 3:");
	float R = 2; 
	float S = 5; 
	float T = -1; 
	float X = -3;
	float Y = 1;
	float Z = 0;
	float  x = (R>=5) || (T > Z) && (X-Y+R > 3 * Z);
	printf("\na) x= %f",x);
	x = (abs(T) + 3 >=4) && !(3 * R / 2 < S *3);
	printf("\nb) x= %f",x);
	x = (X==2) || (Y==1) && ((Z==0) || (R > 3)) && (S < 10);
	printf("\nc) x= %f",x);
	x = (R != S) || !(sqrt(R) < sqrt(X)) && (4327 * X * S * Z);
	printf("\nd) x= %f",x);

	//Exercicio 4:
	printf("\n\nExercicio 4:");
	int V1 = 20;
	int V2 = 30;
	int V3 = 40;
	printf("\na) %i", V1 && V2);
	printf("\nb) %i", V1 || V2);
	printf("\nc) %i", !V1);
	printf("\nd) %i", V2 && V1);
	printf("\ne) %i", V2 && V3 && V1);
	printf("\nf) %i", V1 || V2 && V3);
	printf("\ng) %i", V1 && !V3);
	
	//Exercicio 5:
	printf("\n\nExercicio 5:");
	int idade;
	int salario;
	int peso;
	float altura;
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite sua salario: ");
	scanf("%i", &salario);
	
	printf("Digite sua peso: ");
	scanf("%i", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("a) Maior de idade? %i", idade >= 18);
	printf("\nb) Pode ganhar mais de R$ 1000? %i", idade >= 18 && idade <= 50);
	printf("\nc) Pode ganhar mais de R$ 5000? %i", idade >= 18 && peso >= 40);
	printf("\nd) Pode ser diretora? %i", (altura >1.20 && peso > 30) || idade > 30);
	
	
	
	return 0;
}
