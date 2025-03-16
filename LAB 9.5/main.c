#include <stdio.h>
#include <string.h>

struct produto{
    char nome[50], marca[50];
    float preco;
};

void MediaTotal(struct produto produtos[8]){
    float soma = 0;
    for(int i = 0; i < 8; i++){
        soma += produtos[i].preco;
    }
    float media = soma / 8;
    printf("media total %f", media);
}

void VerificaNumProdutos(struct produto produtos[8]){
    int cont1 = 0;int cont2 = 0; int cont3 = 0; int cont4 = 0; int cont5 = 0; int cont6 = 0; int cont7 = 0; int cont8 = 0;
    char marca2[50]; char marca3[50]; char marca4[50]; char marca5[50]; char marca6[50]; char marca7[50]; char marca8[50];

    int marca1 = produtos[0].marca;
    if(strcmp(produtos[1].marca, produtos[2].marca) != 0){
        cont2 = 1;
        strcpy(marca2[50], produtos[1].marca);
    }
    if((strcmp(produtos[2].marca, produtos[0].marca) != 0) && (strcmp(produtos[2].marca, produtos[1].marca) != 0)){
        cont3 = 1;
        strcpy(marca3[50], produtos[2].marca);
    }
    if((strcmp(produtos[3].marca, produtos[0].marca) != 0) && (strcmp(produtos[3].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[3].marca, produtos[2].marca) != 0) ){
        cont4 = 1;
        strcpy(marca4[50], produtos[3].marca);
    }
    if((strcmp(produtos[4].marca, produtos[0].marca) != 0) && (strcmp(produtos[4].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[4].marca, produtos[2].marca) != 0) && (strcmp(produtos[4].marca, produtos[3].marca) != 0)){
        cont5 = 1;
        strcpy(marca5[50], produtos[5].marca);
    }
    if((strcmp(produtos[5].marca, produtos[0].marca) != 0) && (strcmp(produtos[5].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[5].marca, produtos[2].marca) != 0) && (strcmp(produtos[5].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[5].marca, produtos[4].marca) != 0)){
        cont6 = 1;
        strcpy(marca6[50], produtos[5].marca);
    }
    if((strcmp(produtos[6].marca, produtos[0].marca) != 0) && (strcmp(produtos[6].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[6].marca, produtos[2].marca) != 0) && (strcmp(produtos[6].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[6].marca, produtos[4].marca) != 0) && (strcmp(produtos[6].marca, produtos[5].marca) != 0)){
        cont7 = 1;
        strcpy(marca7[50], produtos[6].marca);
    }
    if((strcmp(produtos[7].marca, produtos[0].marca) != 0) && (strcmp(produtos[7].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[2].marca) != 0) && (strcmp(produtos[7].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[4].marca) != 0) && (strcmp(produtos[7].marca, produtos[5].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[6].marca) != 0)){
        cont8 = 1;
        strcpy(marca8[50], produtos[7].marca);
    }

    if(cont1 == 1){
        int produtos1;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca1) == 0){
                produtos1++;
            }
        }
        printf("%s %d\n", marca1, produtos1);
    }
    if(cont2 == 1){
        int produtos2;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca2) == 0){
                produtos2++;
            }
        }
        printf("%s %d\n", marca2, produtos2);
    }
    if(cont3 == 1){
        int produtos3;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca3) == 0){
                produtos3++;
            }
        }
        printf("%s %d\n", marca3, produtos3);
    }
    if(cont4 == 1){
        int produtos4 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca4) == 0){
                produtos4++;
            }
        }
        printf("%s %d\n", marca4, produtos4);
    }
    if(cont5 == 1){
        int produtos5 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca5) == 0){
                produtos5++;
            }
        }
        printf("%s %d\n", marca5, produtos5);
    }if(cont6 == 1){
        int produtos6 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca6) == 0){
                produtos6++;
            }
        }
        printf("%s %d\n", marca6, produtos6);
    }
    if(cont7 == 1){
        int produtos7 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca7) == 0){
                produtos7++;
            }
        }
        printf("%s %d\n", marca7, produtos7);
    }
    if(cont8 == 1){
        int produtos8 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca8) == 0){
                produtos8++;
            }
        }
        printf("%s %d\n", marca8, produtos8);
    }

}

void MediaPorMarca(struct produto produtos[8]){
    int cont1 = 0;int cont2 = 0; int cont3 = 0; int cont4 = 0; int cont5 = 0; int cont6 = 0; int cont7 = 0; int cont8 = 0;
    char marca2[50]; char marca3[50]; char marca4[50]; char marca5[50]; char marca6[50]; char marca7[50]; char marca8[50];

    int marca1 = produtos[0].marca;
    if(strcmp(produtos[1].marca, produtos[2].marca) != 0){
        cont2 = 1;
        strcpy(marca2[50], produtos[1].marca);
    }
    if((strcmp(produtos[2].marca, produtos[0].marca) != 0) && (strcmp(produtos[2].marca, produtos[1].marca) != 0)){
        cont3 = 1;
        strcpy(marca3[50], produtos[2].marca);
    }
    if((strcmp(produtos[3].marca, produtos[0].marca) != 0) && (strcmp(produtos[3].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[3].marca, produtos[2].marca) != 0) ){
        cont4 = 1;
        strcpy(marca4[50], produtos[3].marca);
    }
    if((strcmp(produtos[4].marca, produtos[0].marca) != 0) && (strcmp(produtos[4].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[4].marca, produtos[2].marca) != 0) && (strcmp(produtos[4].marca, produtos[3].marca) != 0)){
        cont5 = 1;
        strcpy(marca5[50], produtos[5].marca);
    }
    if((strcmp(produtos[5].marca, produtos[0].marca) != 0) && (strcmp(produtos[5].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[5].marca, produtos[2].marca) != 0) && (strcmp(produtos[5].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[5].marca, produtos[4].marca) != 0)){
        cont6 = 1;
        strcpy(marca6[50], produtos[5].marca);
    }
    if((strcmp(produtos[6].marca, produtos[0].marca) != 0) && (strcmp(produtos[6].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[6].marca, produtos[2].marca) != 0) && (strcmp(produtos[6].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[6].marca, produtos[4].marca) != 0) && (strcmp(produtos[6].marca, produtos[5].marca) != 0)){
        cont7 = 1;
        strcpy(marca7[50], produtos[6].marca);
    }
    if((strcmp(produtos[7].marca, produtos[0].marca) != 0) && (strcmp(produtos[7].marca, produtos[1].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[2].marca) != 0) && (strcmp(produtos[7].marca, produtos[3].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[4].marca) != 0) && (strcmp(produtos[7].marca, produtos[5].marca) != 0) &&
       (strcmp(produtos[7].marca, produtos[6].marca) != 0)){
        cont8 = 1;
        strcpy(marca8[50], produtos[7].marca);
    }

    if(cont1 == 1){
        int produtos1;
        float soma1 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca1) == 0){
                produtos1++;
                soma1 += produtos[i].preco;
            }
        }
        float media1 = soma1 / produtos1;
        printf("media %s %f\n", marca1, media1);
    }
    if(cont2 == 1){
        int produtos2;
        float soma2 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca2) == 0){
                produtos2++;
                soma2 += produtos[i].preco;
            }
        }
        float media2 = soma2 / produtos2;
        printf("media %s %f\n", marca2, media2);
    }
    if(cont3 == 1){
        int produtos3;
        float soma3 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca3) == 0){
                produtos3++;
               soma3 += produtos[i].preco;
            }
        }
        float media3 = soma3 / produtos3;
        printf("media %s %f\n", marca3, media3);
    }
    if(cont4 == 1){
        int produtos4;
        float soma4 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca4) == 0){
                produtos4++;
               soma4 += produtos[i].preco;
            }
        }
        float media4 = soma4 / produtos4;
        printf("media %s %f\n", marca4, media4);
    }
    if(cont5 == 1){
        int produtos5;
        float soma5 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca5) == 0){
                produtos5++;
               soma5 += produtos[i].preco;
            }
        }
        float media5 = soma5 / produtos5;
        printf("media %s %f\n", marca5, media5);
    }
    if(cont6 == 1){
        int produtos6;
        float soma6 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca6) == 0){
                produtos6++;
               soma6 += produtos[i].preco;
            }
        }
        float media6 = soma6 / produtos6;
        printf("media %s %f\n", marca6, media6);
    }
    if(cont7 == 1){
        int produtos7;
        float soma7 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca7) == 0){
                produtos7++;
               soma7 += produtos[i].preco;
            }
        }
        float media7 = soma7 / produtos7;
        printf("media %s %f\n", marca7, media7);
    }
    if(cont8 == 1){
        int produtos8;
        float soma8 = 0;
        for(int i = 0; i < 8; i++){
            if(strcmp(produtos[i].marca, marca8) == 0){
                produtos8++;
               soma8 += produtos[i].preco;
            }
        }
        float media8 = soma8 / produtos8;
        printf("media %s %f\n", marca8, media8);
    }


}

int main(){
    struct produto produtos[8];
    for(int i = 0; i < 8; i++){
        scanf("%s %s %f", &produtos[i].nome, produtos[i].marca, produtos[i].preco);
    }

    VerificaNumProdutos(produtos);
    MediaTotal(produtos);
    MediaPorMarca(produtos);


    return 0;
}
