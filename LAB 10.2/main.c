#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contaVezes(char string[], char caractere) {
    int cont = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            cont++;
        }
    }
    printf("%d\n", cont);
}

int main() {
    char string[50], caractere;
    fgets(string, 50, stdin);
    scanf("%c", &caractere);
    contaVezes(string, caractere);
    return 0;
}
