#include <stdio.h>

int main() {
    float altura;
    char sexo;
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Digite seu sexo F/M: ");
    scanf("%s", &sexo);
    
    if(sexo == 'M' || sexo == 'm'){
        float peso = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.3f", peso);
    }else if(sexo == 'F' || sexo == 'f'){
        float peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é: %.3f", peso);
    }
    
    return 0;
}