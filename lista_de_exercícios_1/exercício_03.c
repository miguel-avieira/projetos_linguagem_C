#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;
    int peso = 1 + 2 + 3;
    
    printf("Valor da n1: ");
    scanf("%f", &n1);
    
    printf("Valor da n2: ");
    scanf("%f", &n2);
    
    printf("Valor da n3: ");
    scanf("%f", &n3);
    
    float soma = (n1 + (n2 * 2) + (n3 * 3)) / peso;
    
    printf("A soma ponderada são: %.2f", soma);
    
    return 0;
 
    
}