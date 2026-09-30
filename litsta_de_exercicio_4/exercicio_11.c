#include <stdio.h>

int main() {
    float A[10], negativos = 0, somaPositivos = 0, media;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o número %d: ", i + 1);
        scanf(" %f", &A[i]);
    }
    for(i = 0; i < 10; i++){
        if(A[i] < 0){
            negativos++;
        }
        else if(A[i] >= 0){
            somaPositivos = somaPositivos + A[i];
        }
    }
    
    printf("Quantidade de números negativos: %.2f\n", negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);
    
    
    
    return 0;
}