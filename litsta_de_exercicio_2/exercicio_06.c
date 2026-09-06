#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool A, B;
    int entradaA, entradaB;
    
    printf("Digite o valor de A (0 = Falso, 1 = Verdadeiro): ");
    scanf("%d", &entradaA);
    
    printf("Digite o valor de B (0 = Falso, 1 = Verdadeiro): ");
    scanf("%d", &entradaB);
    
    A = entradaA;
    B = entradaB;
    
    if(A == B){
        printf("Os dois valores são iguais.");
    }else{
        printf("Os valores são diferentes.");
    }
    

    return 0;
}