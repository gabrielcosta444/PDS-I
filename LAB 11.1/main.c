#include <stdio.h>
#include <stdlib.h>

void imprime(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void multiplica(int vet[], int n, double v) {
    int *pont;
    pont = vet;
    for (int i = 0; i < n; i++) {
        *pont = *pont * v;
        pont++;
    }
}

int main() {
    int vet[] = {1, 2, 3, 4, 5};
    int n = 5;
    double v = 2;

    imprime(vet, n);
    multiplica(vet, n, v);
    imprime(vet, n);
    multiplica(vet, n, 1 / v);
    imprime(vet, n);

    return 0;
}
