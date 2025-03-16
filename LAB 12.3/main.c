#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

void lerMatriz(int matriz[TAMANHO][TAMANHO], FILE *arquivo) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrizes(int mat1[TAMANHO][TAMANHO], int mat2[TAMANHO][TAMANHO], int resultado[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAMANHO; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void salvarResultadoEmBinario(int matriz[TAMANHO][TAMANHO], const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "wb");
    if (!arquivo) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    fwrite(matriz, sizeof(int), TAMANHO * TAMANHO, arquivo);
    fclose(arquivo);
}

void imprimirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    int matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO], resultado[TAMANHO][TAMANHO];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (!arquivoEntrada) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    lerMatriz(matriz1, arquivoEntrada);
    lerMatriz(matriz2, arquivoEntrada);
    fclose(arquivoEntrada);

    multiplicarMatrizes(matriz1, matriz2, resultado);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    salvarResultadoEmBinario(resultado, nomeArquivoSaida);

    printf("Resultado da multiplicação:\n");
    imprimirMatriz(resultado);

    return 0;
}
