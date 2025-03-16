#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia, mes, ano;
};

struct Evento {
    char nome[100], local[100];
    struct Data data;
};

void CadastrarEventos(struct Evento agenda[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", agenda[i].nome, agenda[i].local, &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
    }
}

void ImprimirEventos(struct Evento agenda[], struct Data d, int n) {
    int controle = 0;
    for (int i = 0; i < n; i++) {
        if (agenda[i].data.dia == d.dia && agenda[i].data.mes == d.mes && agenda[i].data.ano == d.ano) {
            printf("%s %s\n", agenda[i].nome, agenda[i].local);
            controle = 1;
        }
    }
    if (controle == 0) {
        printf("Nenhum evento encontrado\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Evento agenda[n];
    CadastrarEventos(agenda, n);
    struct Data d;
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
    ImprimirEventos(agenda, d, n);

    return 0;
}
