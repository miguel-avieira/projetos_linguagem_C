#include <stdio.h>

int main() {
    int voto;
    int v1 = 0, v2 = 0, v3 = 0, total;

    printf("===== ELEICAO =====\n");
    printf("Digite 1, 2 ou 3 para votar no candidato. Digite 0 para encerrar.\n");

    do {
        printf("Seu voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            v1++;
        } else if (voto == 2) {
            v2++;
        } else if (voto == 3) {
            v3++;
        } else if (voto != 0) {
            printf("Voto invalido! Use 1, 2, 3 ou 0 para encerrar.\n");
        }
    } while (voto != 0);

    total = v1 + v2 + v3;

    printf("\n===== RESULTADO =====\n");
    printf("Candidato 1: %d voto(s)\n", v1);
    printf("Candidato 2: %d voto(s)\n", v2);
    printf("Candidato 3: %d voto(s)\n", v3);
    printf("Total de votos: %d\n", total);

    if (total == 0) {
        printf("Nenhum voto registrado. Nao ha vencedor.\n");
    } else if (v1 > v2 && v1 > v3) {
        printf("Vencedor: Candidato 1\n");
    } else if (v2 > v1 && v2 > v3) {
        printf("Vencedor: Candidato 2\n");
    } else if (v3 > v1 && v3 > v2) {
        printf("Vencedor: Candidato 3\n");
    } else {
        printf("Houve empate entre os mais votados.\n");
    }

    return 0;
}
