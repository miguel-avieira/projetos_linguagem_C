
#include <stdio.h>

int main() {
    int entrada, saida, horas;
    float total;

    printf("Hora de entrada (0 a 23): ");
    scanf("%d", &entrada);
    printf("Hora de saida (0 a 23): ");
    scanf("%d", &saida);

    horas = saida - entrada;

   
    if (horas < 0) {
        horas = horas + 24;
    }

    
    if (horas <= 1) {
        total = 10.00;
    } else {
        total = 10.00 + (horas - 1) * 5.00;
    }

    printf("\nTempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
