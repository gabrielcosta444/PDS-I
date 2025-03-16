#include <stdio.h>
#include <stdlib.h>

void Vetores(int array[]){
  int VetPar[8], VetImpar[8];
  int contpar = 0;
  int contimpar = 0;
  for(int i = 0; i < 8; i++){
    if(array[i] % 2 == 0){
        VetPar[contpar] = array[i];
        contpar++;
    }else{
       VetImpar[contimpar] = array[i];
       contimpar++;
    }
  }
  if(contpar > 0){
    printf("Vetor dos pares: ");
    for(int i = 0; i < contpar; i++){
    printf("%d", VetPar[i]);
    }
    printf("\n");
  }else{printf("N�o h� n�meros pares.\n");}
  if(contimpar > 0){
    printf("Vetor dos �mpares:");
    for(int i = 0; i < contimpar; i++){
    printf("%d", VetImpar[i]);
    }
  }else{printf("N�o h� n�meros �mpares.\n");}
}

int main()
{
    int array[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &array[i]);
    }
    Vetores(array);
    return 0;
}
