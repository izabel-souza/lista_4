#include <stdio.h> <stdlib.h> <string.h> 

int valida_mail(char *s);

int main (void) {

    char email[64];
    char *s = email;
    printf("Informe um email: ");
    scanf(" %63[^\n]%c", email);

    int resultado;
    resultado = valida_mail(s);
    if(resultado == 0) {
        printf("Email invalido");
    }
    else {
        printf("Email valido");
    }

    return 0;
}

int valida_mail(char *s) {

    int contagem_caracteres = 0, contagem_numeros = 0;

    for(int i = 0; i < strlen(s); i++) {
        if((s[i] == '.') && (s[i+1] == s[i])) {
            return 0;
        }
        if((s[i] > -1) || (s[i] < 9)) {
            contagem_numeros++;
        }
        if((s[0] >= 97) || (s[0] <= 122)) {
            contagem_caracteres++;
        }
    }
    if((s[0] < 97) || (s[0] > 122) || (contagem_caracteres < 2) || (contagem_numeros < 2) || (s[strlen(s) - 1] == '.')) {
        return 0;
    }
    else {
        return 1;
    }


}