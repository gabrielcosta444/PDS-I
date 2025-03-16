#include <stdio.h>
#include <stdlib.h>

int VerificaBissexto(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        return 1;
    }else{
    return 0;
    }
}

int main(){
    int ano;
    scanf("%d", &ano);
    if(VerificaBissexto(ano)){
        printf("1\n");
    }else{
        printf("0\n");
    }
    return 0;
}
