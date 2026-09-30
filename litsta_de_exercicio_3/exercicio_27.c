#include <stdio.h>

int main() {

	int aprovados = 0, reprovados = 0;
	double nota, percentual;

	for(int i = 1; i <= 10; i++) {
		printf("Digite a nota do aluno %d: ", i);
		scanf("%lf", &nota);

		if(nota >= 7) {
			aprovados++;
		} else {
			reprovados++;
		}
	}
	percentual = (aprovados / 10.0) * 100;

	printf("\nTotal de aprovados: %d\n", aprovados);
	printf("Total de reprovados: %d\n", reprovados);
	printf("Percentual de aprovação: %.2f%%\n", percentual);


	return 0;
}
