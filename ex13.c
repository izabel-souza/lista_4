#include <stdio.h> <string.h> <stdlib.h>

void contagem_caracteres(char *string);

int main (void) {

    char string[50];
    printf("Informe uma frase: ");
    scanf(" %19[^\n]%c", string);
    contagem_caracteres(string);

    return 0;
}

void contagem_caracteres(char *string) {

    int contagem = 0, tamanho = strlen(string);
    for(int i = 0; i < tamanho; i++) {
        
    }
}