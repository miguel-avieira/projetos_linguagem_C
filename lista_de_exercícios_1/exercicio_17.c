#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float salario, cheque1, cheque2;
    float cpmf1, cpmf2, saldo;

    printf("Digite o salario depositado: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque: R$ ");
    scanf("%f", &cheque1);

    printf("Digite o valor do segundo cheque: R$ ");
    scanf("%f", &cheque2);

    cpmf1 = cheque1 * 0.38 / 100;
    cpmf2 = cheque2 * 0.38 / 100;

    saldo = salario - cheque1 - cpmf1 - cheque2 - cpmf2;

    printf("\nCPMF do primeiro cheque: R$ %.2f\n", cpmf1);
    printf("CPMF do segundo cheque: R$ %.2f\n", cpmf2);
    printf("Saldo atual: R$ %.2f\n", saldo);

    return 0;
}