#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("Par");
    }else{
        printf("Ímpar");
    }

    return 0;
}