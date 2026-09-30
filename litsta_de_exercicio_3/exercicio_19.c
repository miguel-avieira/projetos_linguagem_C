#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double peso, altura;
	double expo = 2;

	printf("Digite seu peso em KG (Ex: 67): ");
	scanf("%lf", &peso);
	printf("Digite sua altura em metros (Ex: 1.67): ");
	scanf("%lf", &altura);

	double imc = peso / pow(altura, expo);

	if(imc <= 18.5) {
		printf("Você está abaixo do peso!");
	} else if(imc > 18.5 && imc <= 24.9) {
		printf("Você está no peso adequado!");
	} else if(imc > 24.9 && imc <= 29.9) {
		printf("Você está com sobrepeso!");
	} else {
		printf("Você está obeso!");
	}

	return 0;
}