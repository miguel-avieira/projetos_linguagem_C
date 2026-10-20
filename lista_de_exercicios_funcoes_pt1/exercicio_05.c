#include <stdio.h>

#define PI 3.1414592   /* mesmo valor de PI do exercicio 4 */

/* 5. Volume da esfera: V = 4/3 * PI * r^3
   Obs.: usa-se 4.0/3.0, pois 4/3 em C e divisao inteira e daria 1 */
double volumeEsfera(double r) {
    return (4.0 / 3.0) * PI * r * r * r;
}

int main(void) {
    double r;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &r);
    printf("Volume da esfera: %.2f\n", volumeEsfera(r));
    return 0;
}
