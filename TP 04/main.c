#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info{
  int pontos, jogos, vitorias, derrotas, empates, saldo, golsmarcados, golssofridos;
  char nome[20];
}Info;

void ordenarTimes(Info times[], int n){
  Info aux;
  int controle = 0;
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n-i-1; j++){
        if(times[j].pontos < times[j+1].pontos){
            aux = times[j];
            times[j] = times[j+1];
            times[j+1] = aux;
            controle = 1;
        }else if(times[j].pontos == times[j+1].pontos){
            if(times[j].vitorias < times[j+1].vitorias){
              aux = times[j];
              times[j] = times[j+1];
              times[j+1] = aux;
              controle = 1;
            }else if(times[j].vitorias == times[j+1].vitorias){
              if(times[j].saldo < times[j+1].saldo){
                aux = times[j];
                times[j] = times[j+1];
                times[j+1] = aux;
                controle = 1;
              }else if(times[j].saldo == times[j+1].saldo){
                if(times[j].golsmarcados < times[j+1].golsmarcados){
                  aux = times[j];
                  times[j] = times[j+1];
                  times[j+1] = aux;
                  controle = 1;
                }else if(times[j].golsmarcados == times[j+1].golsmarcados){
                  if(times[j].golssofridos > times[j+1].golssofridos){
                    aux = times[j];
                    times[j] = times[j+1];
                    times[j+1] = aux;
                    controle = 1;
                  }
                }
              }
            }
        }

    }
    if(controle == 0){
        break;
    }
  }
}

int main()
{
    int n;
    scanf("%d", &n);
    Info times[n];

    for(int i = 0; i < n; i++){
        scanf("%s", times[i].nome);
        times[i].pontos = times[i].jogos = times[i].vitorias = times[i].derrotas = times[i].empates =
        times[i].saldo = times[i].golsmarcados = times[i].golssofridos = 0;
    }

    char time1[20], time2 [20];
    int gols1, gols2;

    for(int i = 0; i < n; i++){
        scanf("%s x %s %d x %d", time1, time2, &gols1, &gols2);
        time2[strlen(time2) - 1] = '\0';
        for(int j = 0; j < n; j++){
            if(strcmp(time1, times[j].nome) == 0){
                times[j].jogos ++;
                times[j].golsmarcados += gols1;
                times[j].golssofridos += gols2;
                if(gols1 > gols2){
                    times[j].vitorias ++;
                    times[j].pontos += 3;
                }else if(gols2 > gols1){
                    times[j].derrotas++;
                }else{
                    times[j].empates++;
                    times[j].pontos += 1;
                }
            }else if(strcmp(time2, times[j].nome) == 0){
                times[j].jogos++;
                times[j].golsmarcados += gols2;
                times[j].golssofridos += gols1;
                if(gols2 > gols1){
                    times[j].vitorias ++;
                    times[j].pontos += 3;
                }else if(gols1 > gols2){
                    times[j].derrotas++;
                }else{
                    times[j].empates++;
                    times[j].pontos += 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        times[i].saldo = times[i].golsmarcados - times[i].golssofridos;
    }

    ordenarTimes(times, n);

    printf("Time | Pontos | Jogos | Vitorias | Empates | Derrotas | Saldo | Gols Pro | Gols Contra\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d %d %+d %d %d\n", times[i].nome, times[i].pontos, times[i].jogos, times[i].vitorias,
               times[i].empates, times[i].derrotas, times[i].saldo, times[i].golsmarcados, times[i].golssofridos);
    }




    return 0;
}
