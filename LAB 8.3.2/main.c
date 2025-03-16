#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[50], sobrenome[50];
    unsigned int mat;
    float nota1, nota2, nota3;
    int xara;
    float media;
};

struct aluno lista[10];

int main(){


    for(int i = 0; i < 10; i++){
      fgets(lista[i].nome, 50, stdin);
      fgets(lista[i].sobrenome, 50, stdin);
      scanf("%u", &lista[i].mat);
      scanf("%f %f %f", &lista[i].nota1, &lista[i].nota2, &lista[i].nota3);
      lista[i].media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3;
      lista[i].xara = 0;
      getchar();
    }

    //ordenacao bubble sort
    int controle;
    struct aluno aux;
    for(int i = 0; i < 9; i++){
            controle = 0;
            for(int j = 0; j < 9; j++){
                if(lista[j].media > lista[j+1].media){
                    aux = lista[j];
                    lista[j] = lista[j+1];
                    lista[j+1] = aux;
                    controle = 1;
                }
            }
            if(controle == 0){
                break;
            }
     }

     //desempate do melhor aluno
     struct aluno melhor = lista[0];
     for(int i = 1; i < 10; i++){
        if(lista[0].media == lista[i].media){
            if(lista[0].nota1 == lista[i].nota1){
                if(lista[i].nota2 == lista[0].nota2){
                    if(lista[i].mat < lista[0].mat){
                        melhor = lista[i];
                    }
                }else if(lista[i].nota2 > lista[0].nota2){
                  melhor = lista[i];
                 }
            }else if(lista[i].nota1 > lista[0].nota1){
              melhor = lista[i];
             }
        }else if(lista[i].media > lista[0].media){
          melhor = lista[i];
         }
     }

     //verifica se o melhor tem xara e a situacao do xara
     for(int i = 0; i < 10; i++){
        if((strcmp(melhor.nome, lista[i].nome) == 0) && melhor.mat != lista[i].mat){
            if((lista[i].nota1 >= 60 && lista[i].nota2 >= 60 && lista[i].nota3 >= 60) && i != 9){
                melhor.xara = 1;
            }
            if((lista[i].nota1 < 60 || lista[i].nota2 < 60 || lista[i].nota3 < 60) && i != 9){
                melhor.xara = 2;
            }
            if(i == 9){
                melhor.xara = 3;
            }

        }
     }

     //printa os resultados na tela
     printf("Melhor Aluno: %s\n", melhor.nome);
     printf("Matrícula: %u\n", melhor.mat);
     printf("Média: %.2f\n", melhor.media);
     if(melhor.xara == 0){
        printf("O melhor aluno não tem xará\n");
     }else if(melhor.xara == 1){
       printf("O melhor aluno é amigo do seu xará\n");
      }else if(melhor.xara == 2){
        printf("O melhor aluno evita seu xará\n");
       }else{
         printf("O melhor aluno quer mudar de nome\n");
        }

    return 0;
}
