#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int id_aluno;
    float n1, n2, n3, ME;
    
    printf("Digite seu número de identificação: ");
    scanf("%d", &id_aluno);
    
    printf("Agora digite a sua N1(Nota 1): ");
    scanf("%f", &n1);
    
    printf("Agora digite a sua N2(Nota 2): ");
    scanf("%f", &n2);
    
    printf("Agora digite a sua N3(Nota 3): ");
    scanf("%f", &n3);
    
    printf("Agora digite a sua ME(Média de exercícios): ");
    scanf("%f", &ME);
    
    float MA = (n1 + n2 * 2 + n3 *3 + ME)/7;
    
    //Código mais repetido, mais demorado professora.
    
    if(MA >= 90){
        printf("Número de identificação do aluno: %d\n", id_aluno);
        printf("Nota 1: %.2f\n", n1);
        printf("Nota 2: %.2f\n", n2);
        printf("Nota 3: %.2f\n", n3);
        printf("Média dos exercícios: %.2f\n", ME);
        printf("Média de aproveitamento: %.2f\n", MA);
        printf("Aprovado! - Conceito A");
    }else if(MA >= 75 && MA < 90){
        printf("Número de identificação do aluno: %d\n", id_aluno);
        printf("Nota 1: %.2f\n", n1);
        printf("Nota 2: %.2f\n", n2);
        printf("Nota 3: %.2f\n", n3);
        printf("Média dos exercícios: %.2f\n", ME);
        printf("Média de aproveitamento: %.2f\n", MA);
        printf("Aprovado! - Conceito B");
    }else if(MA >= 60 && MA < 75){
        printf("Número de identificação do aluno: %d\n", id_aluno);
        printf("Nota 1: %.2f\n", n1);
        printf("Nota 2: %.2f\n", n2);
        printf("Nota 3: %.2f\n", n3);
        printf("Média dos exercícios: %.2f\n", ME);
        printf("Média de aproveitamento: %.2f\n", MA);
        printf("Aprovado! - Conceito C");
    }else if(MA >= 40 && MA < 60){
        printf("Número de identificação do aluno: %d\n", id_aluno);
        printf("Nota 1: %.2f\n", n1);
        printf("Nota 2: %.2f\n", n2);
        printf("Nota 3: %.2f\n", n3);
        printf("Média dos exercícios: %.2f\n", ME);
        printf("Média de aproveitamento: %.2f\n", MA);
        printf("Reprovado! - Conceito D");
    }else if(MA < 40){
        printf("Número de identificação do aluno: %d\n", id_aluno);
        printf("Nota 1: %.2f\n", n1);
        printf("Nota 2: %.2f\n", n2);
        printf("Nota 3: %.2f\n", n3);
        printf("Média dos exercícios: %.2f\n", ME);
        printf("Média de aproveitamento: %.2f\n", MA);
        printf("Reprovado! - Conceito E");
    }
    
    return 0;
}