#include <stdio.h>
#include <stdlib.h>

int SomaRec(int array[], int n) {
    if (n == 0) {
        return 0;
    }
    return array[n-1] + SomaRec(array, n-1);
}

int main() {
    int n, resultado;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    resultado = SomaRec(array, n);
    printf("%d\n", resultado);

    return 0;
}
