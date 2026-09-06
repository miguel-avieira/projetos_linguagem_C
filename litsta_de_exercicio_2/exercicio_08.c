#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Verifica todas as possíveis ordens
    if (A >= B && B >= C) {
        printf("Ordem decrescente: %d, %d, %d\n", A, B, C);
    } else if (A >= C && C >= B) {
        printf("Ordem decrescente: %d, %d, %d\n", A, C, B);
    } else if (B >= A && A >= C) {
        printf("Ordem decrescente: %d, %d, %d\n", B, A, C);
    } else if (B >= C && C >= A) {
        printf("Ordem decrescente: %d, %d, %d\n", B, C, A);
    } else if (C >= A && A >= B) {
        printf("Ordem decrescente: %d, %d, %d\n", C, A, B);
    } else {
        printf("Ordem decrescente: %d, %d, %d\n", C, B, A);
    }

    return 0;
}