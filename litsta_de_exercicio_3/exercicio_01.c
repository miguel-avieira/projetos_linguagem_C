#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nome[100];
    
    printf("Qual o seu nome?\n");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Olá, %s! Seja bem vindo à disciplina de Lógica de Programação.", nome);

    return 0;
}