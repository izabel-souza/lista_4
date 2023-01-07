#include <stdio.h> <stdlib.h>
#define valor_inicial 4.95

void calcula_corrida(float dist, float *b1, float *b2);

int main (void) {

    float dist, b1, b2;
    printf("Informe distancia: ");
    scanf("%f", &dist);
    calcula_corrida(dist, &b1, &b2);

    printf("Valor na bandeira 1 = R$%1.2f\n", b1);
    printf("Valor na bandeira 2 = R$%1.2f\n", b2);

    return 0;
}

void calcula_corrida(float dist, float *b1, float *b2) {
    *b1 = (valor_inicial + (dist * 2.5));
    *b2 = (valor_inicial + (dist * 3));
}