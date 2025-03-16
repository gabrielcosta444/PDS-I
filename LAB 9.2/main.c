#include <stdio.h>
#include <stdlib.h>

int VerificaPrimo(int n){
    int cont = 0;
    for(int i = 2;
     i < n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont == 0){
        return 1;
    }else{return 0;}
}

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 2){
        printf("-1\n");
    }else{
      if(VerificaPrimo(n) == 0){
        printf("0\n");
      }else{
        printf("1\n");
      }
    }

    return 0;
}
