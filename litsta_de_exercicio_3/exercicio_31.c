#include <stdio.h>

int main() {
    float litros, preco, bruto, desconto, final;
    float percentual;

    printf("Quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    printf("Preco do litro: R$ ");
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        percentual = 0;
    } else if (litros <= 40) {
        percentual = 3;
    } else {
        percentual = 5;
    }

    desconto = bruto * percentual / 100;
    final = bruto - desconto;

    printf("\nValor bruto:       R$ %.2f\n", bruto);
    printf("Desconto (%.0f%%):   R$ %.2f\n", percentual, desconto);
    printf("Valor final:       R$ %.2f\n", final);

    return 0;
}
