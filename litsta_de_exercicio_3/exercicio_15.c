#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    if(num1 > num2 && num1 > num3){
        printf("%d é maior", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d é maior", num2);
    }else if(num3 > num2 && num3 > num1){
        printf("%d é maior", num3);
    }

    return 0;
}