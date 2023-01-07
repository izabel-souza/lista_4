#include <stdio.h> <stdlib.h> <string.h>

int *inicializacao_vetor(int n);
void atribuicao_vetor(int n, int *v);
void percorrer_vetores(int n, int metade, int *v, int *p_inicio, int *p_final);

int main (void) {

    int n;
    do {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &n);
    } while ((n < 0) || (n % 2 != 0));

    int *vetor;
    vetor = inicializacao_vetor(n);
    atribuicao_vetor(n, vetor);
    int metade = n/2;
    int *p_inicio, *p_final;   
    percorrer_vetores(n, metade, vetor, p_inicio, p_final);

    return 0;
}

int *inicializacao_vetor(int n) {
    int *v = (int *) malloc(n * sizeof(int));
    if (v == NULL) { printf("Falta de memoria"); exit(1); } 
    return v;
}

void atribuicao_vetor(int n, int *v) {

    for(int i = 0; i < n; i++) {
        printf("Informe o %d elemento do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
}

void percorrer_vetores(int n, int metade, int *v, int *p_inicio, int *p_final) {
    for(int i = 0; i < metade; i++) {
        p_inicio = &v[i];
        printf("%d ", *p_inicio);
    }
    printf("\n");
    for(int i = n-1; i >= metade; i--) {
        p_final = &v[i];
        printf("%d ", *p_final);
    }
}