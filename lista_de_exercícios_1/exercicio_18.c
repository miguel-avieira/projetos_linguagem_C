#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float pesoSaco, racaoGato;
    float pesoSacoGramas, racaoConsumida, racaoRestante;

    printf("Digite o peso do saco de racao em kg: ");
    scanf("%f", &pesoSaco);

    printf("Digite a quantidade de racao para cada gato em gramas: ");
    scanf("%f", &racaoGato);

    pesoSacoGramas = pesoSaco * 1000;

    racaoConsumida = racaoGato * 2 * 5;

    racaoRestante = pesoSacoGramas - racaoConsumida;

    printf("\nRacao consumida em 5 dias: %.2f g\n", racaoConsumida);
    printf("Racao restante: %.2f g\n", racaoRestante);

    return 0;
}