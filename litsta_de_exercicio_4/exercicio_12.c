#include <stdio.h>

int main() {
	float A[5], soma = 0, media, maior, menor;
	int i;

	for(i = 0; i < 5; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf(" %f", &A[i]);
	}
	for(i = 0; i < 5; i++) {
		printf("%.2f\n", A[i]);
	}

	maior = A[0];
	menor = A[0];

	for(i = 0; i < 5; i++) {
		if(A[i] > maior) {
			maior = A[i];
		}
		if(A[i] < menor) {
			menor = A[i];
		}
		soma = soma + A[i];
	}
	media = soma / 5;

	printf("Maior valor: %.2f\n", maior);
	printf("Menor valor: %.2f\n", menor);
	printf("Média dos valores: %.2f\n", media);

	return 0;


}







