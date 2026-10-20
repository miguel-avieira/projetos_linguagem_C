#include <stdio.h>

#define PI 3.1414592   /* valor informado no enunciado */

/* 4. Volume do cilindro: V = PI * raio^2 * altura */
double volumeCilindro(double altura, double raio) {
    return PI * raio * raio * altura;
}

int main(void) {
    double altura, raio;
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%lf %lf", &altura, &raio);
    printf("Volume do cilindro: %.2f\n", volumeCilindro(altura, raio));
    return 0;
}
