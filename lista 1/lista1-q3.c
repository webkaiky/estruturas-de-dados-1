#include <stdio.h>
#include <stdlib.h>

// Função para preencher a matriz com números aleatórios entre 1 e 100
void preencherMatriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}
// Função para exibir a matriz
void exibirMatriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    // Aloca dinamicamente memória para a matriz
    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }

    // Preenche e exibe a matriz
    preencherMatriz(matriz, n);
    exibirMatriz(matriz, n);

    // Libera a memória alocada
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}