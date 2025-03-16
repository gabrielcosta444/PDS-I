#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[50];
    int cont;
    fgets(frase, 50, stdin);
    if(frase[0] != '/0' && frase[0] != ' '){
        cont = 1;
    }else{
      cont = 0;
    }
    for(int i = 0; i < strlen(frase) - 2; i++){
       if(frase[i] == ' ' && frase[i+1] != ' '){
          cont++;
       }
    }
    printf("%d", cont);
    return 0;
}
