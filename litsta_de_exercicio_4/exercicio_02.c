#include <stdio.h>

int main()
{
	int vet[6];

	for(int i = 0; i < 6; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &vet[i]);

	}
	printf("\nValores lidos:\n");
	for(int i = 0; i < 6; i++) {
		printf("%d\n", vet[i]);
	}


	return 0;
}