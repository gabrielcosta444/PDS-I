#include <stdio.h>
#include <stdlib.h>

struct registro{
  int salario, idade, filhos;
};

float MediaSalarial(struct registro registros[]){
  int soma = 0;
  for(int i = 0; i < 10; i++){
    soma += registros[i].salario;
  }
  float media = soma / 10;
  return media;
}

float MediaFilhos(struct registro registros[]){
  int soma = 0;
  for(int i = 0; i < 10; i++){
    soma += registros[i].filhos;
  }
  float media = soma / 10;
  return media;
}

int MaiorSalario(struct registro registros[]){
  int aux, maior;
  int controle;
  for(int i = 0; i < 9; i++){
    controle = 0;
    for(int j = 0; j < 9; j++){
        if(registros[j].salario > registros[j+1].salario){
            aux = registros[j].salario;
            registros[j].salario = registros[j+1].salario;
            registros[j+1].salario = aux;
            controle = 1;
        }
        if(controle == 0){
            break;
        }
    }
  }
  return registros[9].salario;
}



int main()
{
    float mediasalarial, mediafilhos;
    int maiorsalario;
    struct registro registros [10];
    for(int i = 0; i < 10; i++){
        scanf("%d %d %d", &registros[i].salario, &registros[i].idade, &registros[i].filhos);
    }
    mediasalarial = MediaSalarial(registros);
    mediafilhos = MediaFilhos(registros);
    maiorsalario = MaiorSalario(registros);
    printf("%f %f %d", mediasalarial, mediafilhos, maiorsalario);


    return 0;
}
