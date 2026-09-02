#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2; //decladrados
    
    //cadastro
    printf("Digite a sua N1: ");
    scanf("%f", &n1 ); // o & é usado quando tem 'scanf'
    
    
    printf("Digite a sua N2: ");
    scanf("%f", &n2 );
    float media = (n1 + n2) / 2; //está decladrado no meio, pois tem uma ordem de leitura, primeiro vem os dados depois vem o calculo
    
    //imprimir
    printf("Valor n1: %.2f\nValor n2: %.2f\n", n1, n2);
    printf("A sua média: %.2f", media);
    
 
    
}