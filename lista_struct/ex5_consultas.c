#include <stdio.h>

#define MAX_PAC 15
#define MAX_CONS 30

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char nome[50];
    int idade;
} Paciente;

typedef struct {
    Paciente paciente;
    Data data;
    char descricao[100];
} Consulta;

int buscarPaciente(Paciente p[], int total, int codigo) {
    int i;
    for (i = 0; i < total; i++)
        if (p[i].codigo == codigo) return i;
    return -1;
}

int dataValida(Data d) {
    return d.ano > 0 && d.mes >= 1 && d.mes <= 12 && d.dia >= 1 && d.dia <= 31;
}

int datasIguais(Data a, Data b) {
    return a.dia == b.dia && a.mes == b.mes && a.ano == b.ano;
}

Data lerData() {
    Data d;
    do {
        printf("Data (dd mm aaaa): ");
        scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
        if (!dataValida(d)) printf("Data invalida!\n");
    } while (!dataValida(d));
    return d;
}

void exibirConsulta(Consulta c) {
    printf("Paciente: %s (cod. %d) | Data: %02d/%02d/%04d | Atendimento: %s\n",
           c.paciente.nome, c.paciente.codigo,
           c.data.dia, c.data.mes, c.data.ano, c.descricao);
}

void cadastrarPaciente(Paciente p[], int *total) {
    int codigo;

    if (*total >= MAX_PAC) {
        printf("Limite de %d pacientes atingido!\n", MAX_PAC);
        return;
    }
    printf("Codigo: ");
    scanf("%d", &codigo);
    if (buscarPaciente(p, *total, codigo) != -1) {
        printf("Codigo ja cadastrado!\n");
        return;
    }
    p[*total].codigo = codigo;
    printf("Nome: ");
    scanf(" %49[^\n]", p[*total].nome);
    printf("Idade: ");
    scanf("%d", &p[*total].idade);
    (*total)++;
    printf("Paciente cadastrado!\n");
}

void registrarConsulta(Paciente p[], int totalPac, Consulta c[], int *totalCons) {
    int codigo, pos;

    if (*totalCons >= MAX_CONS) {
        printf("Limite de %d consultas atingido!\n", MAX_CONS);
        return;
    }
    printf("Codigo do paciente: ");
    scanf("%d", &codigo);
    pos = buscarPaciente(p, totalPac, codigo);
    if (pos == -1) {
        printf("Paciente nao cadastrado!\n");
        return;
    }
    c[*totalCons].paciente = p[pos];
    c[*totalCons].data = lerData();
    printf("Descricao do atendimento: ");
    scanf(" %99[^\n]", c[*totalCons].descricao);
    (*totalCons)++;
    printf("Consulta registrada!\n");
}

void pesquisarPorPaciente(Consulta c[], int total) {
    int i, codigo, achou = 0;
    printf("Codigo do paciente: ");
    scanf("%d", &codigo);
    for (i = 0; i < total; i++) {
        if (c[i].paciente.codigo == codigo) {
            exibirConsulta(c[i]);
            achou = 1;
        }
    }
    if (!achou) printf("Nenhuma consulta encontrada para esse paciente.\n");
}

void listarPorData(Consulta c[], int total) {
    int i, achou = 0;
    Data d = lerData();
    for (i = 0; i < total; i++) {
        if (datasIguais(c[i].data, d)) {
            exibirConsulta(c[i]);
            achou = 1;
        }
    }
    if (!achou) printf("Nenhuma consulta nessa data.\n");
}

int contarConsultas(Consulta c[], int total, int codigoPaciente) {
    int i, qtd = 0;
    for (i = 0; i < total; i++)
        if (c[i].paciente.codigo == codigoPaciente) qtd++;
    return qtd;
}

void consultasPorPaciente(Paciente p[], int totalPac, Consulta c[], int totalCons) {
    int i;
    if (totalPac == 0) printf("Nenhum paciente cadastrado.\n");
    for (i = 0; i < totalPac; i++)
        printf("%s (cod. %d): %d consulta(s)\n",
               p[i].nome, p[i].codigo, contarConsultas(c, totalCons, p[i].codigo));
}

void pacienteMaisAtendido(Paciente p[], int totalPac, Consulta c[], int totalCons) {
    int i, qtd, maior = 0, iMaior = 0;
    if (totalPac == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }
    for (i = 0; i < totalPac; i++) {
        qtd = contarConsultas(c, totalCons, p[i].codigo);
        if (qtd > maior) {
            maior = qtd;
            iMaior = i;
        }
    }
    if (maior == 0) printf("Nenhuma consulta registrada.\n");
    else printf("Paciente com mais atendimentos: %s (%d consultas)\n", p[iMaior].nome, maior);
}

int main() {
    Paciente pacientes[MAX_PAC];
    Consulta consultas[MAX_CONS];
    int totalPac = 0, totalCons = 0, opcao;

    do {
        printf("\n===== CLINICA =====\n");
        printf("1 - Cadastrar paciente\n");
        printf("2 - Registrar consulta\n");
        printf("3 - Pesquisar consultas de um paciente\n");
        printf("4 - Listar consultas por data\n");
        printf("5 - Numero de consultas por paciente\n");
        printf("6 - Paciente com mais atendimentos\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarPaciente(pacientes, &totalPac); break;
            case 2: registrarConsulta(pacientes, totalPac, consultas, &totalCons); break;
            case 3: pesquisarPorPaciente(consultas, totalCons); break;
            case 4: listarPorData(consultas, totalCons); break;
            case 5: consultasPorPaciente(pacientes, totalPac, consultas, totalCons); break;
            case 6: pacienteMaisAtendido(pacientes, totalPac, consultas, totalCons); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
