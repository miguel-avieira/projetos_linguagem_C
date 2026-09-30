#include <stdio.h>

int main() {
    float A[15], soma = 0, media;
    int i;

    for(i = 0; i < 15; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf(" %f", &A[i]);
    }
    for(i = 0; i < 15; i++){
        soma = soma + A[i];
    }
    
    media = soma / 15;
    
    printf("\nA média da turma é: %.2f\n", media);
    
    return 0;
}