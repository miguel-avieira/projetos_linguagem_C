#include <stdio.h>

/* 3. Converte Fahrenheit para Celsius: C = (F - 32.0) * (5.0/9.0) */
double fahrenheitParaCelsius(double f) {
    return (f - 32.0) * (5.0 / 9.0);
}

int main(void) {
    double f;
    printf("Temperatura em Fahrenheit: ");
    scanf("%lf", &f);
    printf("%.2f F = %.2f C\n", f, fahrenheitParaCelsius(f));
    return 0;
}
