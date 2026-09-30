#include <stdio.h>

int main()
{
	int A[8];
	int X, Y, soma;
	
	for (int i = 0; i < 8; i++){
	    printf("Digite o número %d: ", i + 1);
	    scanf("%d", &A[i]);
	}
	
	printf("Digite um número (de 0 a 7): ");
	scanf("%d", &X);
	printf("Digite um número (de 0 a 7): ");
	scanf("%d", &Y);
	
	soma = A[X] + A[Y];
	
	printf("A[%d] + A[%d] = %d", A[X], A[Y], soma);

	return 0;
}