#include <stdio.h>

int main()
{
	int A[10], i, maior, X = 0;

	for(i = 0; i < 10; i++) {
		printf("Digite o número %d:", i + 1);
		scanf("%d", &A[i]);
	}

	maior = A[0];

	for(i = 1; i < 10; i++) {
		if(A[i] > maior) {
			maior = A[i];
			X = i;
		}
	}
	printf("\nVetor:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", A[i]);
	}

	printf("Maior numero: %d\n", maior);
	printf("Posicao: %d\n", X);
	return 0;

}