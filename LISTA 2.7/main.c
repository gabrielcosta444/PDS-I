#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[50];
    fgets(frase, 50, stdin);
    int tamanho = strlen(frase);
    for(int i = tamanho - 2; i >= 0; i--){
        printf("%c", frase[i]);
    }
    return 0;
}
