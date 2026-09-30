#include <stdio.h>

int main()
{
	int A[10], B[10];
	
	for (int i = 0; i < 10; i++){
	    printf("Digite o número %d: ", i + 1);
	    scanf("%d", &A[i]);
	    
	}
	for(int i = 0; i < 10; i++){
	    B[i] = A[i] * A[i];
	}
	
	for(int i = 0; i < 10; i++){
	    printf("Primeiro conjunto: %d - Segundo conjunto: %d\n", A[i], B[i]);
	}
	
	
    return 0;
}