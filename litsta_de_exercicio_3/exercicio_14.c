#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("%d é maior que %d", num1, num2);
    }else{
        printf("%d é menor que %d", num1, num2);
    }

    return 0;
}