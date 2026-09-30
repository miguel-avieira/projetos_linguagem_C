#include <stdio.h>

int main() {
    int n, i;
    char nome[50];
    float nota1, nota2, media;
    float somaMedias = 0, maiorMedia = 0, menorMedia = 0;
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    do {
        printf("Quantidade de alunos: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("A quantidade deve ser maior que zero.\n");
        }
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Nota da primeira avaliacao: ");
        scanf("%f", &nota1);
        printf("Nota da segunda avaliacao: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        somaMedias = somaMedias + media;

        if (i == 1) {
            maiorMedia = media;
            menorMedia = media;
        } else {
            if (media > maiorMedia) {
                maiorMedia = media;
            }
            if (media < menorMedia) {
                menorMedia = media;
            }
        }

        if (media >= 7) {
            printf("%s: media %.2f - Aprovado\n", nome, media);
            aprovados++;
        } else if (media >= 5) {
            printf("%s: media %.2f - Recuperacao\n", nome, media);
            recuperacao++;
        } else {
            printf("%s: media %.2f - Reprovado\n", nome, media);
            reprovados++;
        }
    }

    printf("\n===== RESULTADO DA TURMA =====\n");
    printf("Quantidade de alunos: %d\n", n);
    printf("Aprovados: %d\n", aprovados);
    printf("Em recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", somaMedias / n);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}
