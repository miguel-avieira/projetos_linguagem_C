#include <stdio.h>

int main()
{
     char nome[10], sexo, estadoCivil;
     int tempo;
     
     printf("\nDigite o seu nome: ");
     scanf("%s", nome);
     fflush(stdin);
     
     printf("\nDigite o sexo M/F: ");
     scanf("%s", &sexo);
     
     printf("\nDigite o estado Civil C/S: ");
     scanf("%s", &estadoCivil);
     
     if((sexo == 'F' || sexo == 'f') && (estadoCivil == 'C' || estadoCivil == 'c')){
         printf("\nDigite o total de anos de casamento: ");
         scanf("%d", &tempo);
    }
    
    

    return 0;
}
