#include <stdio.h> <stdlib.h> <string.h>
#define X 7

void atribuir_valores_vetor(int *v);
int pesquisa_posicao(int valor_posicao, int *v);
void vetor_troca(int *v);

int main (void) {

    int vetor[X], valor_posicao, posicao;
    atribuir_valores_vetor(vetor);
    printf("Informe o valor cuja posicao e desejada: ");
    scanf("%d", &valor_posicao);
    posicao = pesquisa_posicao(valor_posicao, vetor);

    posicao != -1 ? printf("Valor %d na posicao %d\n", valor_posicao, posicao) : printf("Valor ou posicao nao encontrados\n");

    vetor_troca(vetor);

    return 0;
}

void atribuir_valores_vetor(int *v) {
    for(int i = 0; i < X; i++) {
        printf("Informe o %d elemento do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
}

int pesquisa_posicao(int valor_posicao, int *v) {

    for(int i = 0; i < X; i++) {
        if(valor_posicao == v[i]) {
            return valor_posicao;
        }
    }
    return -1;

}

void vetor_troca(int *v){

    for(int i = 1; i < X; i++) {
        v[i] += v[i-1];
    }

    for(int i = 0; i < X; i++) {
        printf("%d ", v[i]);
    }

}