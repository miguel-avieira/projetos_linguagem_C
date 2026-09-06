#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num > 0){
        printf("O número é positivo.");
    }else if(num < 0){
        printf("O número é negativo.");
    }else{
        printf("O número é zero.");
    }

    return 0;
}