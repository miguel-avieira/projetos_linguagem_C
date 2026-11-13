#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valorBanho(char porte[], char especie[]) {
    if ((strcmp(porte, "pequeno") == 0) && (strcmp(especie, "gato") == 0)) {
        return 90;
    }else if((strcmp(porte, "pequeno") == 0) && (strcmp(especie, "cachorro") == 0)){
     return 45;   
    }
    else if (strcmp(porte, "medio") == 0) {
        return 65;
    } else{
        return 85;
    }
}

float valorTosa(int tipo){
    switch (tipo){
        case 1: 
         return 40;
        case 2:
         return 70;
        case 3:
         return 90;
        default:
         return 0;
    
}
}

float valorVet(int tipo){
    switch (tipo){
        case 1:
         return 80;
        case 2:
         return 100;
        case 3:
         return 110;
        default:
         return 0;
    }
}

int main()
{
    char login[30];
    char senha[30];
    
    char nomecli[30], tel[15], nomepet[10][30], especie[10][30], raca[10][30], porte[10][30];
    
    int tentativas = 0, totalPets = 0, petSel, logado = 0, clienteCad = 0, petCad = 0;
    
    int opcao, opcaoCad, opcpet, opcs, op_porte, op_esp, tipo, tipov, opcp, tipop, quant;
    float preco, totalGeral = 0;
    
    char nomeAli[3][30] = {"Ração Cachorro 10Kg", "Ração Gato 3Kg", "Petiscos"};
    float precoAli[3] = {120, 65, 15};
    
    char nomeAsc[4][30] = {"Comedouro e Bebedouro", "Caminha", "Brinquedos", "Coleira"};
    float precoAsc[4] = {45, 100, 25, 40};
    
    char nomeHig[3][30] = {"Shampoo", "Escova", "Eliminador de Odor"};
    float precoHig[3] = {22, 25, 33};
    
    char nomeTosa[3][30] = {"Higienica", "Completa", "Na tesoura"};
    char nomeVet[3][30] = {"Consulta", "Vacina", "Exame"};
    
    char itemDesc[100][50];
    int itemQtd[100];
    float itemValor[100];
    int totalItens = 0;
    float totalComp;
    
    while (logado == 0 && tentativas < 3){
        printf("Digite seu usuário: ");
        scanf("%s", login);
        printf("Digite sua senha: ");
        scanf("%s", senha);
         if(strcmp (login, "admin") == 0 && strcmp(senha, "123") == 0){
             logado = 1;
             system("clear");
         } else{
             tentativas++;
             printf("Acesso recusado. Tentativas restantes: %d\n", 3 - tentativas);
             }
         }
     if (logado == 0 ){
         printf("\nAcesso negado!\n");
         return 0;
     }

     
      do {
    printf("----------PET SHOP LOS HERMANOS----------");
    printf("\n1 - Cadastros");
    printf("\n2 - Serviços");
    printf("\n3 - Produtos");
    printf("\n4 - Comprovante Final");
    printf("\n0 - Sair");
    
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        system("clear");
         do{
             printf("----------CADASTROS----------");
             printf("\n1 - Cadastrar Cliente");
             printf("\n2 - Cadastrar PET");
             printf("\n0 - Voltar");
             
             printf("\nEscolha uma opção: ");
             scanf("%d", &opcaoCad);
             
             switch (opcaoCad){
                 case 1: 
                 system("clear");
                 printf("Digite o nome do cliente: ");
                 getchar();
                 fgets(nomecli, sizeof(nomecli), stdin);
                 nomecli[strcspn(nomecli, "\n")] = '\0';
                 
                 printf("Digite o telefone: ");
                 scanf("%s", tel);
                 
                 system("clear");
                 printf("Cliente cadastrado com sucesso!\n\n");
                 clienteCad = 1;
                 break;
                case 2:
                system("clear");
                if(clienteCad == 1){
                do{
                 if(totalPets >= 10){
                     printf("\nLimite de PETS atingido!\n");
                     break;
                 }  
                 
                 printf("Digite o nome do PET: ");
                 getchar();
                 fgets(nomepet[totalPets], sizeof(nomepet[totalPets]), stdin);
                 nomepet[totalPets][strcspn(nomepet[totalPets], "\n")] = '\0';
                 
                 do{
                     printf("\nSelecione a espécie: ");
                     printf("\n1 - Cachorro");
                     printf("\n2 - Gato");
                     printf("\nEscolha uma opção: ");
                     scanf("%d", &op_esp);
                 } while (op_esp < 1 || op_esp >2);
                 
                 if(op_esp == 1){
                     strcpy(especie[totalPets], "cachorro");
                 } else{
                     strcpy(especie[totalPets], "gato");
                 }
                 
                 printf("\nDigite a raça: ");
                 getchar();
                 fgets(raca[totalPets], sizeof(raca[totalPets]), stdin);
                 raca[totalPets][strcspn(raca[totalPets], "\n")] = '\0';
                 
                 do{ 
                     printf("\nSelecione o porte: ");
                     printf("\n1 - Pequeno");
                     printf("\n2 - Médio");
                     printf("\n3 - Grande");
                     printf("\nEscolha uma opção: ");
                     scanf("%d", &op_porte);
                 } while (op_porte < 1 || op_porte > 3);
                 
                 if (op_porte == 1) {
                 strcpy(porte[totalPets], "pequeno");
                } else if (op_porte == 2) {
                  strcpy(porte[totalPets], "medio");
                } else {
                 strcpy(porte[totalPets], "grande");
                }
                 totalPets ++;
                 petCad = 1;
                 system("clear");
                 printf("PET CADASTRADO!\n\n");
                 
                 printf("Deseja cadastrar outro PET?\n 1 - Sim\n 2 - Não\nEscolha: ");
                 scanf("%d", &opcpet);
                 
                }while (opcpet == 1);
                system("clear");
                printf("Cadastros de PET finalizado!\n\n");
                } else{
                    system("clear");
                    printf("Cadastre o cliente primeiro\n\n");
                } break;
                case 0:
                system("clear");
                 printf("Voltando ao menu principal\n");
                 break;
                default:
                system("clear");
                 printf("Opção inválida\n");
             }
         } while (opcaoCad != 0);
         break;
         
        case 2:
        system("clear");
         if(petCad == 1){
             printf("Para qual PET?\n");
             for (int i = 0; i < totalPets; i++){
                 printf("%d - %s\n", i + 1, nomepet[i]);
             }
             printf("Escolha: ");
             scanf("%d", &petSel);
             petSel--;
             
             if(petSel < 0 || petSel >= totalPets){
                 system("clear");
                 printf("PET inválido\n");
                 break;
             }
             system("clear");
             do{
                 printf("----------SERVIÇOS----------");
                 printf("\n1 - Banho");
                 printf("\n2 - Tosa");
                 printf("\n3 - Veterinária");
                 printf("\n0 - Voltar");
                 printf("\nEscolha uma opção: ");
                 scanf("%d", &opcs);
             
             switch(opcs){
                case 1:
                system("clear");
                 preco = valorBanho(porte[petSel], especie[petSel]);
                 printf("\nBanho: R$ %.2f\n", preco);
                 strcpy(itemDesc[totalItens], "Banho - ");
                 strcat(itemDesc[totalItens], nomepet[petSel]);
                 itemQtd[totalItens] = 1;
                 itemValor[totalItens] = preco;
                 totalItens++;
                 break;
                case 2:
                system("clear");
                 printf("----------TOSAS----------");
                 printf("\n1 - Higienica  R$40");
                 printf("\n2 - Completa  R$70");
                 printf("\n3 - Na tesoura  R$90");
                 printf("\nEscolha uma opção: ");
                 scanf("%d", &tipo);

                 preco = valorTosa(tipo);
                 printf("Tosa: R$ %.2f\n", preco);
                 if (preco > 0){
                 snprintf(itemDesc[totalItens], sizeof(itemDesc[totalItens]), "Tosa %s - %s", nomeTosa[tipo - 1], nomepet[petSel]);
                 itemQtd[totalItens] = 1;
                 itemValor[totalItens] = preco;
                 totalItens++;
                }
                 break;
                case 3:
                system("clear");
                 printf("----------VETERINÁRIA----------");
                 printf("\n1 - Consulta  R$80");
                 printf("\n2 - Vacina  R$100");
                 printf("\n3 - Exame  R$110");
                 printf("\nEscolha uma opção: ");
                 scanf("%d", &tipov);
             
                 preco = valorVet(tipov);
                 printf("Veterinária: R$ %.2f\n", preco);
                 if (preco > 0){
                 snprintf(itemDesc[totalItens], sizeof(itemDesc[totalItens]), "Veterinaria %s - %s", nomeVet[tipov - 1], nomepet[petSel]);
                 itemQtd[totalItens] = 1;
                 itemValor[totalItens] = preco;
                 totalItens++;
                }
                 break;
                 
                case 0:
                 system("clear");
                 printf("Voltando o menu principal!\n\n");
                 break;
                 
                default:
                system("clear");
                 printf("Opção inválida\n");
                } 
            }while (opcs != 0);
         } else{
            printf("Cadastre o PET primeiro\n\n");
         } break;
        
        case 3:
         system("clear");
         printf("----------PRODUTOS----------");
         printf("\n1 - Alimentos");
         printf("\n2 - Acessórios");
         printf("\n3 - Higiene");
         printf("\n0 - Voltar");
         printf("\nEscolha uma opção: ");
         scanf("%d", &opcp);
         
         switch (opcp){
            case 1:
             system("clear");
             do{
                 printf("----------ALIMENTOS----------");
                 for(int i = 0; i < 3; i++){
                     printf("\n%d - %s R$%.2f", i + 1, nomeAli[i], precoAli[i]);
                 }
                 printf("\n0 - Voltar");
                 printf("\nEscolha o produto: ");
                 scanf("%d", &tipop);
                 if(tipop == 0){
                     system("clear");
                     printf("Voltando ao menu principal!\n");
                 } else if(tipop > 0 && tipop <=3){
                     printf("Quantidade: ");
                     scanf("%d", &quant);
                     float totalA = quant * precoAli[tipop - 1];
                     printf ("Valor : %.2f\n\n", totalA);
                     totalGeral = totalGeral + totalA;
                     strcpy(itemDesc[totalItens], nomeAli[tipop - 1]);
                     itemQtd[totalItens] = quant;
                     itemValor[totalItens] = totalA;
                     totalItens++;
                 } else{
                     system("clear");
                     printf("Opção inválida\n");
                    }
                } while (tipop != 0);
            break;
            case 2:
            system("clear");
             do{
                 printf("----------ACESSÓRIOS----------");
                 for (int i = 0; i < 4; i++){
                     printf("\n%d - %s R$%.2f", i + 1, nomeAsc[i], precoAsc[i]);
                 }
                 printf("\n0 - Voltar");
                 printf("\nEscolha o produto: ");
                 scanf("%d", &tipop);
                 if(tipop == 0){
                      system("clear");
                      printf("Voltando ao menu principal!\n");
                 }else if(tipop > 0 && tipop <=4){
                     printf("Quantidade: ");
                     scanf("%d", &quant);
                     float totalP = quant * precoAsc[tipop - 1];
                     printf ("Valor: %.2f\n\n", totalP);
                     totalGeral = totalGeral + totalP;
                     strcpy(itemDesc[totalItens], nomeAsc[tipop - 1]);
                     itemQtd[totalItens] = quant;
                     itemValor[totalItens] = totalP;
                     totalItens++;
                 }else{
                     system("clear");
                     printf("Opção inválida\n");
                 }
                } while (tipop != 0);
            break;
            case 3:
            system("clear");
             do{
                 printf("----------HIGIENE----------");
                 for(int i = 0; i < 3; i++){
                     printf("\n%d - %s R$%.2f", i + 1, nomeHig[i], precoHig[i]);
                 }
                 printf("\n0 - Voltar");
                 printf("\nEscolha o produto: ");
                 scanf("%d", &tipop);
                 if(tipop == 0){
                     system("clear");
                     printf("Voltando ao menu principal!\n");
                 } else if(tipop > 0 && tipop <= 3){
                     printf("Quantidade: ");
                     scanf("%d", &quant);
                     float totalP = quant * precoHig[tipop - 1];
                     printf("Valor: %.2f\n\n", totalP);
                     totalGeral = totalGeral + totalP;
                     strcpy(itemDesc[totalItens], nomeHig[tipop - 1]);
                     itemQtd[totalItens] = quant;
                     itemValor[totalItens] = totalP;
                     totalItens++;
                 } else{
                     system("clear");
                     printf("Opção inválida\n");
                 }
             } while (tipop != 0);
            break;
            case 0: 
             system("clear");
             printf("Voltando ao menu principal!\n\n");
             break;
             
            default:
             system("clear");
             printf("Opção inválida\n");
        }
        break;
        case 4:
         system("clear");
         printf("----------COMPROVANTE FINAL----------\n");
         printf("Funcionário: %s\n", login);

         if (clienteCad == 1){
             printf("Cliente: %s - Tel: %s\n", nomecli, tel);
            } else{
             printf("Cliente: nenhum cadastrado\n");
            }

         for (int i = 0; i < totalPets; i++){
             printf("Pet: %s (%s, %s, porte %s)\n", nomepet[i], especie[i], raca[i], porte[i]);
            }

         printf("\nItens:\n");
         totalComp = 0;
         for (int i = 0; i < totalItens; i++){
             printf("%d - %s  x%d  R$ %.2f\n", i + 1, itemDesc[i], itemQtd[i], itemValor[i]);
             totalComp = totalComp + itemValor[i];
            }

         if (totalItens == 0){
             printf("Nenhum item registrado.\n");
            }

          printf("\nTotal do atendimento: R$ %.2f\n\n", totalComp);
        break;
        case 0: 
         system("clear");
         printf("Encerrando programa\n");
         break;
        default:
         system("clear");
         printf("Opção inválida\n");
    }
    
    } while (opcao != 0);

    return 0;
}