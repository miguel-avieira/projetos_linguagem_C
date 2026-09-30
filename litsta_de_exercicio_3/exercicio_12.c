#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    
    printf("Digite um número: ");
    scanf("%f", &num);
    
    if(num < 0){
        printf("Negativo");
    }else if(num == 0){
        printf("Zero");
    }else{
        printf("Positivo");
    }

    return 0;
}