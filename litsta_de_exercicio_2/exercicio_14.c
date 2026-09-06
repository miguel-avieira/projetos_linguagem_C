#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cardapio;
    
    printf("====Cadápio====\n");
    printf("1 - Hambúrguer com fritas - R$28,00\n");
    printf("2 - Filé de frango grelhado - R$32,00\n");
    printf("3 - Lasanha à bolonhesa - R$35,00\n");
    printf("4 - Filé de peixe com arroz - R$42,00\n");
    printf("5 - Salada especial - R$25,00\n");
    printf("Digite um número e escolha uma opção: ");
    scanf("%d", &cardapio);
    system("clear");
    
    switch(cardapio){
        case 1:
            printf("1 - Hambúrguer com fritas - R$28,00");
            break;
        case 2:
            printf("2 - Filé de frango grelhado - R$32,00\n");
            break;
        case 3:
            printf("3 - Lasanha à bolonhesa - R$35,00\n");
            break;
        case 4:
            printf("4 - Filé de peixe com arroz - R$42,00\n");
            break;
        case 5:
            printf("5 - Salada especial - R$25,00\n");
            break;
        default:
        printf("Opção inválida!");
        break;
    }
    
    
    
    return 0;
}