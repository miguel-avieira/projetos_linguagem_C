#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("Maior de idade");
    }else{
        printf("Menor de idade");
    }

    return 0;
}