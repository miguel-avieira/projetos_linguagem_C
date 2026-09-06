#include <stdlib.h>
#include <stdio.h>

int main()
{
    float velo_via, velo_carro;
    
    printf("=====Sistema de multas=====\n");
    printf("Informe a velocidade máxima perimitida na via: ");
    scanf("%f", &velo_via);
    
    printf("Informe a velocidade registrada do veículo: ");
    scanf("%f", &velo_carro);
    
    printf("\n--- Resultado ---\n");
    printf("Limite da via: %.2f km/h\n", velo_via);
    printf("Velocidade registrada: %.2f km/h\n", velo_carro);
    
    if(velo_carro <= velo_via){
        printf("Não ouve nenhuma infração!\n");
    }else{
        float percentual = ((velo_carro - velo_via) / velo_via) * 100;
        printf("Percentual excedido: %.2f%%\n", percentual);
        
        if(percentual <= 20){
            printf("Infração média!\n");
        }else if(percentual <= 50){
            printf("Infração grave!\n");
        }else{
            printf("Infração gravíssima!\n");
        }
        
        if(velo_carro > 120){
            printf("Alerta: Velocidade extremamente elevada!\n");
        }
        
    }

    return 0;
}