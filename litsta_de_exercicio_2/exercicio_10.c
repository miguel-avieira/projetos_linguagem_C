#include <stdio.h>
#include <math.h>
int main() {
    float altura, peso;
    int expoente = 2;
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Digite seu peso em KG: ");
    scanf("%f", &peso);
    
    float quadrado = pow(altura, expoente);
    float imc = peso / quadrado;
    
    
    if(imc < 18.5){
        printf("Você está abaixo do peso!");
    }else if(imc >= 18.5 && imc < 25){
        printf("Você está no peso normal!");
    }else if(imc >= 25 && imc < 30){
        printf("Você está acima do peso!");
    }else if(imc >= 30){
        printf("Você está obeso(a)");
    }
    
    return 0;
}
