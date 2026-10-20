#include <stdio.h>
#include <time.h>

/* 10. Idade em anos, meses e dias a partir da data de nascimento */

int diasDoMes(int mes, int ano) {
    const int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    if (mes == 2 && bissexto) return 29;
    return d[mes - 1];
}

void calculaIdade(int dia, int mes, int ano) {
    time_t t = time(NULL);
    struct tm *h = localtime(&t);
    int dh = h->tm_mday, mh = h->tm_mon + 1, ah = h->tm_year + 1900;

    int anos = ah - ano, meses = mh - mes, dias = dh - dia;

    if (dias < 0) {
        meses--;
        int mesAnt = (mh == 1) ? 12 : mh - 1;
        int anoAnt = (mh == 1) ? ah - 1 : ah;
        dias += diasDoMes(mesAnt, anoAnt);
    }
    if (meses < 0) {
        anos--;
        meses += 12;
    }

    /* total de dias vividos */
    struct tm nasc = {0}, hoje = {0};
    nasc.tm_mday = dia; nasc.tm_mon = mes - 1; nasc.tm_year = ano - 1900; nasc.tm_hour = 12;
    hoje.tm_mday = dh;  hoje.tm_mon = mh - 1;  hoje.tm_year = ah - 1900;  hoje.tm_hour = 12;
    long totalDias = (long)(difftime(mktime(&hoje), mktime(&nasc)) / 86400);

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
    printf("Total de dias vividos: %ld\n", totalDias);
}

int main(void) {
    int d, m, a;
    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &d, &m, &a);
    calculaIdade(d, m, a);
    return 0;
}
