#include <stdio.h>
#include <stdlib.h>

int calcular_fator_influencia(int n, int indices[]) {
    //ordem decrescnete
    int temp;
    int controle = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (indices[j] < indices[j + 1]) {
                temp = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp;
                controle = 1;
            }
        }
        if(controle == 0){
            break;
        }
    }

    int fator_influencia = 0;
    for (int i = 0; i < n; i++) {
        if (indices[i] >= i + 1) {
            fator_influencia = i + 1;
        } else {
            break;
        }
    }
    return fator_influencia;
}

int main() {
    int n;
    scanf("%d", &n);
    int indices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &indices[i]);
    }
    int resultado = calcular_fator_influencia(n, indices);
    printf("%d\n", resultado);

    return 0;
}

