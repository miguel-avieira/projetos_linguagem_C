#include <stdio.h>

#define TAM 10

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2.0;
}

float lerNota(const char *rotulo) {
    float n;
    do {
        printf("%s (0 a 10): ", rotulo);
        scanf("%f", &n);
        if (n < 0 || n > 10)
            printf("Nota invalida! Digite novamente.\n");
    } while (n < 0 || n > 10);
    return n;
}

int main() {
    Aluno turma[TAM];
    int i, iMaior = 0, iMenor = 0, acima = 0;
    float soma = 0, mediaGeral;

    for (i = 0; i < TAM; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nome: ");
        scanf(" %49[^\n]", turma[i].nome);
        turma[i].nota1 = lerNota("Nota 1");
        turma[i].nota2 = lerNota("Nota 2");
        turma[i].media = calcularMedia(turma[i].nota1, turma[i].nota2);

        soma += turma[i].media;
        if (turma[i].media > turma[iMaior].media) iMaior = i;
        if (turma[i].media < turma[iMenor].media) iMenor = i;
    }

    mediaGeral = soma / TAM;

    printf("\n========== RESULTADO DA TURMA ==========\n");
    for (i = 0; i < TAM; i++) {
        printf("Matricula: %d | Nome: %s | Media: %.2f | %s\n",
               turma[i].matricula, turma[i].nome, turma[i].media,
               turma[i].media >= 6.0 ? "APROVADO" : "REPROVADO");

        if (turma[i].media > mediaGeral) acima++;
    }

    printf("\nMaior media: %s (%.2f)\n", turma[iMaior].nome, turma[iMaior].media);
    printf("Menor media: %s (%.2f)\n", turma[iMenor].nome, turma[iMenor].media);
    printf("Media geral da turma: %.2f\n", mediaGeral);
    printf("Alunos acima da media geral: %d\n", acima);

    return 0;
}
