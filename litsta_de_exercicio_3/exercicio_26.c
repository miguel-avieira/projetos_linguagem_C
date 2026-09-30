#include <stdio.h>

int main() {

	int qtdAlunos;
	double nota, soma = 0, media;
	
	printf("Digite a quantidade de alunos na sala: ");
	scanf("%d", &qtdAlunos);
	
	for(int i = 1; i <= qtdAlunos; i++){
	    printf("Digite a nota do aluno %d: ", i);
	    scanf("%lf", &nota);
	    soma += nota;
	}
	media = soma / qtdAlunos;
	printf("\nA média da turma é: %.2lf", media);

	return 0;
}
