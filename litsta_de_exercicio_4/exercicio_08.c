#include <stdio.h>

int main()
{
	int A[6], i, X = 0;

	for(i = 0; i < 6; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Valores na ordem inversa:\n")
	for(i = 5; i >= 0; i--) {
		printf("%d\n", A[i]);
	}
	return 0;

}