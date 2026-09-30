#include <stdio.h>

int main()
{
	int A[10], i, pares = 0;

	for (int i = 0; i < 10; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < 10; i++) {
		if(A[i] % 2 == 0) {
			pares++;

		}
	}
	printf("Quantidade de números pares: %d", pares);




	return 0;
}