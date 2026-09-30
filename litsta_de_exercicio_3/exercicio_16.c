#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;
    
    printf("Digite a primeiro nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
  
    float media = (n1 + n2) / 2;
    
    if(media >= 7){
        printf("Aprovado!");
    }else if(media >= 5 && media < 7){
        printf("Recuperação!");
    }else{
        printf("Reprovado!");
    }
    

    return 0;
}