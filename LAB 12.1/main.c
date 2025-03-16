#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont = 0;
    FILE * arq;
    arq = fopen("teste.txt", "r");
    if(arq == NULL){
       printf("Erro\n");
       getchar();
       exit(1);
    }

    char string [1000];
    while(fgets(string, 1000, arq) != NULL)
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == 'a'){
            cont++;
        }
    }
    printf("%d\n", cont);

    fclose(arq);
    system("pause");
    return 0;
}
