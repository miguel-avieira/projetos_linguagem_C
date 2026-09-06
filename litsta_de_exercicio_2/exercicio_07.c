#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        
        int soma = num + 5;
        printf("O resultado é: %d", soma);
    }else{
        int soma = num + 8;
        printf("O resultado é: %d", soma);
    }

    return 0;
}