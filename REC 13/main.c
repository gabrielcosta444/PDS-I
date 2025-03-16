#include <stdio.h>

int menorElemento(int vetor[], int n) {
    if (n == 1) {
        return vetor[0]; // Caso base: se o vetor tem um único elemento, ele é o menor.
    }
    // Compara o último elemento com o menor elemento do restante do vetor.
    int menorRestante = menorElemento(vetor, n - 1);
    return (vetor[n - 1] < menorRestante) ? vetor[n - 1] : menorRestante;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o tamanho do vetor.
    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]); // Lê os elementos do vetor.
    }

    int menor = menorElemento(vetor, n); // Calcula o menor elemento recursivamente.
    printf("%d\n", menor); // Imprime o menor elemento.

    return 0;
}
