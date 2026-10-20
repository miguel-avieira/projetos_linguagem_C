#include <stdio.h>

/* 1. Funcao que recebe dois numeros e retorna o maior deles */
double maior(double a, double b) {
    return (a > b) ? a : b;
}

int main(void) {
    double a, b;
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("Maior: %.2f\n", maior(a, b));
    return 0;
}
