#include <stdio.h>

int main() {

	int n, soma = 0;

	printf("Digite um número interio positivo: ");
	scanf("%d", &n);

	for(int i = 1; i <= n ; i++) {
		soma += i;
	}
	printf("%d", soma);

	return 0;
}
