#include <stdio.h> <string.h> <stdlib.h>
#define TAMANHO 2

int *inicializacao_vetor();
char *inicializacao_vetor_op();
void atribuicao_vetor(int *v);
void atribuicao_vetor_op(char *v);
void vetor_respostas(int *v_1, int *v_2, char *v_op);

int main (void) {

    int *vetor_1, *vetor_2;
    char *vetor_operacoes;

    vetor_1 = inicializacao_vetor();
    vetor_2 = inicializacao_vetor_op();
    vetor_operacoes = inicializacao_vetor_op();
    atribuicao_vetor(vetor_1);
    atribuicao_vetor(vetor_2);
    atribuicao_vetor_op(vetor_operacoes);
    vetor_respostas(vetor_1, vetor_2, vetor_operacoes);

    free(vetor_1);

    return 0;
}

int *inicializacao_vetor() {
    int *v = (int *) malloc(TAMANHO * sizeof(int));
    if (v == NULL) { printf("Falta de memoria"); exit(1); } 
    return v;
}

char *inicializacao_vetor_op() {
    char *v = (char *) malloc(TAMANHO * sizeof(char));
    if (v == NULL) { printf("Falta de memoria"); exit(1); } 
    return v;
}

void atribuicao_vetor(int *v) {
    for(int i = 0; i < TAMANHO; i++) {
        printf("Informe o %d elemento do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
}

void atribuicao_vetor_op(char *v) {
    for(int i = 0; i < TAMANHO; i++) {
        printf("Informe a operacao: ");
        scanf(" %c", &v[i]);
    }
}

void vetor_respostas(int *v_1, int *v_2, char *v_op) {

    int v_respostas[TAMANHO];
    for(int i = 0; i < TAMANHO; i++) {
        switch(v_op[i]) {
            case '+': v_respostas[i] = v_1[i] + v_2[i]; break;
            case '-': v_respostas[i] = v_1[i] - v_2[i]; break;
            case '*': v_respostas[i] = v_1[i] * v_2[i]; break;
            case '/': v_respostas[i] = v_1[i] / v_2[i]; break;
        }
    }

    for(int i = 0; i < TAMANHO; i++) {
        printf("%d %c %d = %d\n", v_1[i], v_op[i], v_2[i], v_respostas[i]);
    }

}