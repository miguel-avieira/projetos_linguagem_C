#include <stdio.h>

int main()
{
	int A[10], i, maior, menor;

	for(i = 0; i < 10; i++) {
		printf("Digite o número %d:", i + 1);
		scanf("%d", &A[i]);
	}

	maior = A[0];
	menor = A[0];

	for(i = 0; i < 10; i++) {
		if(A[i] > maior) {
			maior = A[i];
		}
		if(A[i] < menor) {
			menor = A[i];
		}
	}
	printf("Número maior: %d\n", maior);
	printf("Número menor: %d\n", menor);


	return 0;
}