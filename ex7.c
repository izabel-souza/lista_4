#include <stdio.h> <stdlib.h> <string.h>

void CamelCase (char *s);

int main (void) {

    char frase[20];
    printf("Informe uma frase curta: ");
    scanf(" %19[^\n]%c", frase);
    CamelCase(frase);

    return 0;
}

void CamelCase (char *s) {

    char camelcase[20];
    int x = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ') {
            camelcase[x] = s[i];
            x++;
        }
        else {
            camelcase[x] = (s[i+1]-32);
            x++;
            i++;
        }
    }
    printf("%s", camelcase);
}