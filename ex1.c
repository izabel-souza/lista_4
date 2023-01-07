#include <stdio.h> <stdlib.h>
#define X 10

int *criacao_vetor();
int *criacao_vetor_sec(int *vet);
void impressao(int *vetp, int *vets);

int main (void) {

    int *vetor_primario = criacao_vetor();
    int *vetor_secundario = criacao_vetor_sec(vetor_primario);
    impressao(vetor_primario, vetor_secundario);

    return 0;
}

int *criacao_vetor() {

    int *vet = (int *) malloc(X * sizeof(int));
    if(vet == NULL) { printf("Falta de memoria"); exit(1); }

    for(int i = 0; i < X; i++) {
        printf("Informe o %d elemento do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    return vet;
}

int *criacao_vetor_sec(int *vet) {

    int *vetor_sec = (int *) malloc(X * sizeof(int));
    if(vetor_sec == NULL) { printf("Falta de memoria"); exit(1); }
    int j = X-1;
    
    for(int i = 0; i < X; i++) {
        vetor_sec[i] = vet[j];
        j--;
    }
    return vetor_sec;
}

void impressao(int *vetp, int *vets) {
    printf("VETOR PRIMARIO\n");
    for(int i = 0; i < X; i++) {
        printf("%d ", vetp[i]);
    }
    printf("\n");
    printf("VETOR SECUNDARIO\n");
    for(int i = 0; i < X; i++) {
        printf("%d ", vets[i]);
    }
}