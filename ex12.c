#include <stdio.h> <stdlib.h> <string.h>

void remove_caractere(char *string, char caractere);

int main (void) {

    char string[20], caractere;
    printf("Informe uma string: ");
    scanf(" %19[^\n]%c", string);
    printf("Agora informe qual caractere que deseja que seja removido da string: ");
    scanf(" %c", &caractere);

    remove_caractere(string, caractere);

    return 0;
}

void remove_caractere(char *string, char caractere) {
    
    char frase[20];
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] != caractere) {
            frase[i] = string[i];
        }
        else {
            frase[i] = string[i+1];
        }
    }
    printf("%s", frase);
    
}