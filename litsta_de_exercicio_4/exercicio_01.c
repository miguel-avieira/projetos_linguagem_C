#include <stdio.h>

int main()
{
    int vet[6] = {1, 0, 5, -2, -5, 7};
    int soma;
    
    soma = vet[0] + vet[1] + vet[5];
    
    vet[4] = 100;
    
    for(int i = 0; i < 6; i++){
        printf("%d\n", vet[i]);
    }
    

    return 0;
}