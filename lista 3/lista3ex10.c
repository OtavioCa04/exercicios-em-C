#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, l, temp, num[4][4], mat2[4][4];
    // Leitura da matriz original
    for (i = 0; i < 4; i++) {
        printf("Insira os números da %dª linha:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Insira o número da %dª coluna: \n", j + 1);
            scanf("%d", &num[i][j]);
        }
    }
    // Impressão da matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    // Copiando a matriz original para a nova matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            mat2[i][j] = num[i][j];
        }
    }
    // Ordenação da nova matriz em ordem crescente
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 4; l++) {
                    if (mat2[i][j] < mat2[k][l]) {
                        temp = mat2[i][j];
                        mat2[i][j] = mat2[k][l];
                        mat2[k][l] = temp;
                    }
                }
            }
        }
    }
    // Impressão da nova matriz ordenada
    printf("\nMatriz em ordem crescente:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}
