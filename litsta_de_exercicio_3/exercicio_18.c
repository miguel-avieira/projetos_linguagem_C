#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 0 && idade <= 12){
        printf("Você é uma criança!");
    }else if(idade > 12 && idade <= 17){
        printf("Você è um adolescente!");
    }else if(idade > 17 && idade <= 59){
        printf("Você é um adulto!");
    }else{
        printf("Você é um idoso!");
    }

    return 0;
}