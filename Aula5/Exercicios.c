#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int exercicios() {
//	//Exercico 1:
//	int numero1;
//	int numero2;
//	
//	printf("\nDigite o primeiro numero: ");
//	scanf("%i",&numero1);
//	printf("\nDigite o segundo numero: ");
//	scanf("%i",&numero2);
//	
//	printf("Media dos numeros: %i", (numero1+numero2)/2);

//	//Exercicio 2:
//	int horasTrabalhadas;
//	int valorHora;
//	
//	printf("\nDigite as horas trabalhadas: ");
//	scanf("%i",&horasTrabalhadas);
//	printf("\nDigite o valor da hora: ");
//	scanf("%i",&valorHora);
//	
//	printf("Resultado de horas trabalhadas %i", horasTrabalhadas * valorHora);

//	//Exercicio 3:
//	int ladoQuadrado;
//	
//	printf("\nDigite o lado do quadrado: ");
//	scanf("%i",&ladoQuadrado);
//	
//	printf("Area do quadrado %i", ladoQuadrado * ladoQuadrado);

//	//Exercicio 4:
//	int ladoQuadrado;
//	
//	printf("\nDigite o lado do quadrado: ");
//	scanf("%i",&ladoQuadrado);
//	
//	printf("Area do quadrado %i", ladoQuadrado * ladoQuadrado);

//	//Exercicio 5:
//	int numero1;
//	int numero2;
//	int numero3;
//	
//	printf("\nDigite o primeiro numero ");
//	scanf("%i",&numero1);
//	printf("\nDigite o segundo numero ");
//	scanf("%i",&numero2);
//	printf("\nDigite o terceiro numero ");
//	scanf("%i",&numero3);
//	
//	printf("Resultado da multiplicacao: %i", numero1 * numero2 * numero3);
	
//	//Exercicio 6:
//	int temperaturaCelsius;
//
//	printf("\nDigite a temperatura: ");
//	scanf("%i",&temperaturaCelsius);
//	
//	printf("Temperatura em Fahrenheit %i", ((temperaturaCelsius*9)+160)/5);
	
//	//Exercicio 7:
//	int valorDolar;
//	int cotacaoDolar;
//
//	printf("\nDigite o valor em dolar: ");
//	scanf("%i",&valorDolar);
//	printf("\nDigite a cotacao do dolar: ");
//	scanf("%i",&cotacaoDolar);
//	
//	printf("Valor em Real: R$ %i", valorDolar / cotacaoDolar);
	
	//Exercicio 8:
	char nomeProduto[50];
	int preco;
	int valorDesconto;
	char descricao[50];

	printf("Digite o nome do produto: ");
	gets(nomeProduto);
	printf("Digite o valor do produto: ");
	scanf("%i",&preco);
	fflush(stdin);
	printf("Digite o valor de desconto: ");
	scanf("%i",&valorDesconto);
	fflush(stdin);
	printf("Digite a descricao do produto: ");
	gets(descricao);
	
	printf("\nProduto: %s", nomeProduto);
	printf("\nDescricao: %s", descricao);
	printf("\nPreco Total: %i", preco - valorDesconto);
	
	
	return 0;
}
