#include <stdio.h>
#include <stdlib.h>

float RecMedia(int vetor[], int n) {
    if (n == 1) {
        return vetor[0];
    }
    return ((RecMedia(vetor, n - 1) * (n - 1)) + vetor[n - 1]) / n;
}

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    float resultado = RecMedia(vetor, n);
    printf("%.2f\n", resultado);

    return 0;
}
