#include <stdio.h>
#include <string.h>

struct registro {
    char nome[51];
    unsigned int idade;
    float salario;
};

struct registro registros[4];
int cont = 0;

void inserir(char nome[], int idade, float salario) {
    if (cont < 4) {
        strcpy(registros[cont].nome, nome);
        registros[cont].idade = idade;
        registros[cont].salario = salario;
        cont++;
        printf("Registro %s %u %.2f inserido\n", nome, idade, salario);
    } else {
        printf("Espaco insuficiente\n");
    }
}

void mostrar(char nome[]) {
    int encontrado = 0;
    for (int i = 0; i < cont; i++) {
        if (strcmp(registros[i].nome, nome) == 0) {
            printf("Registro %s %u %.2f\n", registros[i].nome, registros[i].idade, registros[i].salario);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Registro ausente\n");
    }
}

int main() {
    char operacao[10];
    char nome[51];
    unsigned int idade;
    float salario;

    while (fgets(operacao, 10, stdin)) {
        if (strcmp(operacao, "inserir\n") == 0) {
            scanf("%s %u %f", nome, &idade, &salario);
            inserir(nome, idade, salario);
        } else if (strcmp(operacao, "mostrar\n") == 0) {
            scanf("%s", nome);
            mostrar(nome);
        }
    }
    return 0;
}
