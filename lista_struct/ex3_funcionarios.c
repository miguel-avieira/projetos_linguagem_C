#include <stdio.h>

#define MAX 8
#define HORAS_MENSAIS 160
#define ACRESCIMO_EXTRA 0.5
#define DESCONTO 0.10

typedef struct {
    int codigo;
    char nome[50];
    char cargo[30];
    float salarioBase;
    float horasExtras;
} Funcionario;

float calcularValorHora(float salarioBase) {
    return salarioBase / HORAS_MENSAIS;
}

float calcularValorHoraExtra(float valorHora) {
    return valorHora * (1 + ACRESCIMO_EXTRA);
}

float calcularSalarioBruto(Funcionario f) {
    float valorHora = calcularValorHora(f.salarioBase);
    float valorExtra = calcularValorHoraExtra(valorHora);
    return f.salarioBase + f.horasExtras * valorExtra;
}

float calcularSalarioLiquido(float bruto) {
    return bruto - bruto * DESCONTO;
}

int main() {
    Funcionario func[MAX];
    int i, iMaior = 0;
    float bruto, liquido, maiorLiquido = 0, totalBruto = 0, totalLiquido = 0;

    for (i = 0; i < MAX; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &func[i].codigo);
        printf("Nome: ");
        scanf(" %49[^\n]", func[i].nome);
        printf("Cargo: ");
        scanf(" %29[^\n]", func[i].cargo);
        printf("Salario-base: ");
        scanf("%f", &func[i].salarioBase);
        printf("Horas extras: ");
        scanf("%f", &func[i].horasExtras);
    }

    printf("\n================ FOLHA DE PAGAMENTO ================\n");
    for (i = 0; i < MAX; i++) {
        bruto = calcularSalarioBruto(func[i]);
        liquido = calcularSalarioLiquido(bruto);
        totalBruto += bruto;
        totalLiquido += liquido;

        if (i == 0 || liquido > maiorLiquido) {
            maiorLiquido = liquido;
            iMaior = i;
        }

        printf("\nCodigo: %d | Nome: %s | Cargo: %s\n", func[i].codigo, func[i].nome, func[i].cargo);
        printf("Valor da hora: R$ %.2f | Valor da hora extra: R$ %.2f\n",
               calcularValorHora(func[i].salarioBase),
               calcularValorHoraExtra(calcularValorHora(func[i].salarioBase)));
        printf("Salario bruto: R$ %.2f | Salario liquido: R$ %.2f\n", bruto, liquido);
    }

    printf("\n====================================================\n");
    printf("Maior salario liquido: %s (R$ %.2f)\n", func[iMaior].nome, maiorLiquido);
    printf("Custo total da folha (salarios brutos): R$ %.2f\n", totalBruto);
    printf("Total pago aos funcionarios (salarios liquidos): R$ %.2f\n", totalLiquido);

    return 0;
}
