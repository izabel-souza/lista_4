#include <stdio.h> <stdlib.h>
#define X 10
#define Y 5

int *criacao_vetor(int n);
int *vetor_intersecao(int *vetorR, int *vetorS);
void impressao(int *vetorR, int *vetorS, int *vetorX);

int main (void) {

    int *vetorR, *vetorS, *vetorX;
    vetorR = criacao_vetor(X);
    vetorS = criacao_vetor(Y);
    vetorX = vetor_intersecao(vetorR, vetorS);
    impressao(vetorR, vetorS, vetorX);

    free(vetorR);
    free(vetorS);
    free(vetorX);

    return 0;
}

int *criacao_vetor(int n) {
    
    int *vetor = (int *) malloc(n * sizeof(int));
    if(vetor == NULL) { printf("Falta de memoria"); exit(1); }

    for(int i = 0; i < n; i++) {
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    return vetor;

}

int *vetor_intersecao(int *vetorR, int *vetorS) {

    int x = 0;
    int intersecao[1];

    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            if(vetorR[i] == vetorS[j]) {
                intersecao[x] = vetorS[j];
                x++;
            }
        }
    }
    return intersecao;
}

void impressao(int *vetorR, int *vetorS, int *vetorX) {
    printf("VETOR R\n");
    for(int i = 0; i < X; i++) {
        printf("%d ", vetorR[i]);
    }
    printf("\n");
    printf("VETOR S\n");
    for(int i = 0; i < Y; i++) {
        printf("%d ", vetorS[i]);
    }
    printf("\n");
    printf("VETOR INTERSECAO\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetorX[i]);
    }
}
