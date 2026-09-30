#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double num1, num2, resultado;
	char operacao;

	printf("Digite o primeiro número: ");
	scanf("%lf", &num1);
	printf("Digite o segundo número: ");
	scanf("%lf", &num2);
	printf("Digite a operação desejada: (+, -, * ou /): ");
	scanf(" %c", &operacao);

	switch(operacao) {
	case '+':
		resultado = num1 + num2;
		printf("%.2lf + %.2lf = %.2lf", num1, num2, resultado);
		break;
	case '-':
		resultado = num1 - num2;
		printf("%.2lf - %.2lf = %.2lf", num1, num2, resultado);
		break;
	case '*':
		resultado = num1 * num2;
		printf("%.2lf * %.2lf = %.2lf", num1, num2, resultado);
		break;
	case '/':

		if(num2 != 0) {
			resultado = num1 / num2;
			printf("%.2lf / %.2lf = %.2lf", num1, num2, resultado);
		} else {
			printf("Error! Divisão por 0 não é permitida!");
		}
		break;
	default:
		printf("Error!");
	}

	return 0;
}