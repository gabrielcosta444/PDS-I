#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
  char nome[50], telefone[20];
  int idade;
}Cadastro;

Cadastro agenda[100];
int totalContatos = 0;

int buscarContato(char nome[]){
  for(int i = 0; i < totalContatos; i++){
    if(strcmp(agenda[i].nome, nome) == 0){
        return i;
    }
  }
  return -1;
}

void inserirContato(char nome[], int idade, char telefone[]){
  if(totalContatos >= 100){
    printf("Espaço insuficiente.\n");
    return;
  }
  strcpy(agenda[totalContatos].nome, nome);
  agenda[totalContatos].idade = idade;
  strcpy(agenda[totalContatos].telefone, telefone);
  totalContatos++;
  printf("Contato Inserido.\n");
}

void alterarContato(char nome[], int idade, char telefone[]){
  int index = buscarContato(nome);
  if(index == -1){
    printf("Contato inexeistente.\n");
    return;
  }
  int index = buscarContato(nome);
  agenda[index].idade = idade;
  strcpy(agenda[index].telefone, telefone);
  printf("Contato alterado.\n");
}

void excluirContato(char nome[]){
  int index = buscarContato(nome);
  if(index == -1){
    printf("Contato Inexistente.\n");
    return;
  }
  for(int i = index; i < totalContatos - 1; i++){
    agenda[i] = agenda[i+1];
    totalContatos--;
    printf("Contato excluido.\n");
  }
}

void exibirContato(char nome[]){
  int index = buscarContato(nome);
  if(index == -1){
    printf("Contato Inexistente.\n");
    return;
  }
  printf("Nome: %s, Idade: %d, Telefone: %s", agenda[index].nome, agenda[index].idade, agenda[index].telefone);
}

int main()
{
    char nome[50], telefone[20];
    int idade;
    FILE *file;
    file = fopen("agenda.txt", "r");
    if(file == NULL){
        printf("Erro ao abrir arquivo.\n");
        getchar();
        exit(1);
    }
    char operacao[15];
    while(fscanf(file, "%s", operacao) != EOF){
        if(strcmp(operacao, "Inserir") == 0){
            fscanf(file, "%s %d %s", &nome, &idade, &telefone);
            inserirContato(nome, idade, telefone);
        }else if(strcmp(operacao, "Alterar") == 0){
            fscanf(file, "%s %d %s", &nome, &idade, &telefone);
            alterarContato(nome, idade, telefone);
        }else if(strcmp(operacao, "Excluir") == 0){
            fscanf(file, "%s", &nome);
            excluirContato(nome);
        }else if(strcmp(operacao, "Exibir") == 0){
            fscanf(file, "%s", &nome);
            exibirContato(nome);
        }else{
            printf("Comando desconhecido.\n");
        }
    }
    fclose(file);
    system("pause");
    return 0;
}
