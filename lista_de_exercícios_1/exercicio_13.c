#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double pes;
    double polegada, jarda, milha;
    
    printf("Digite a medida em pes: ");
    scanf("%lf", &pes);
    
    polegada = pes * 12;
    jarda = pes / 3;
    milha = pes / (3 * 1760);
    
    printf("Polegadas: %.2lf\n", polegada);
    printf("Jardas: %.2lf\n", jarda);
    printf("Milhas: %.2lf\n", milha);

    
    
    return 0;
}
