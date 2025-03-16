#include <stdio.h>
#include <stdlib.h>

void LerVetor(int* vet, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int* vet;
    vet = (int*) malloc(n * sizeof(int));
    if (vet == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    LerVetor(vet, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", vet[i]);
    }
    free(vet);

    return 0;
}
