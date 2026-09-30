#include <stdio.h>

int main() {
	float A[5], maior, menor;
	int i, posiMaior, posiMenor;

	for(i = 0; i < 5; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf("%f", &A[i]);
	}

	maior = A[0];
	menor = A[0];
	posiMaior = 0;
	posiMenor = 0;

	for(i = 0; i < 5; i++) {
		if(A[i] > maior) {
			maior = A[i];
			posiMaior = i;
		}
		if(A[i] < menor) {
			menor = A[i];
			posiMenor = i;
		}
	}

	printf("Posição do maior: %d\n", posiMaior);
	printf("Posição do menor: %d\n", posiMenor);



	return 0;

}







