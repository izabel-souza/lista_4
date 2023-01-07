#include <stdio.h> <stdlib.h> 

int *criacao_vetor(int n);
int testa_PA(int n, int *v);

int main (void) {

    int n, resultado;
    int *vetor;
    do {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &n);
    } while (n < 3);

    vetor = criacao_vetor(n);  
    resultado = testa_PA(n, vetor);
    
    if(resultado != 0) {
        printf("PA com termo = %d", resultado);
    }
    else {
        printf("Nao e PA");
    }

    free(vetor);

    return 0;
}

int *criacao_vetor(int n) {

    int *vet = (int *) malloc(n * sizeof(int));
    if(vet == NULL) { printf("Falta de memoria"); exit(1); }

    for(int i = 0; i < n; i++) {
        printf("Informe o %d elemento do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    return vet;

}

int testa_PA(int n, int *v) {

    int k = v[1] - v[0];
    
    for(int i = 0; i < n; i++) {
        if(v[i] != (v[0]+k*i)) {
            return 0;
        }
    }
    return k;

}