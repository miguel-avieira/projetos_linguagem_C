
#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    
    if( a + b < c){
        printf("Verdadeiro!");
    }else{
        printf("Falso!");
    }
    
    
    return 0;
}