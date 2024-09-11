#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, mat1[4][4], mat2[4][4];
    // Leitura da matriz original
    for (i = 0; i < 4; i++)
    {
        printf("Insira os números da %dª linha:\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("Insira o número da %dª coluna: \n", j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nMatriz original:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    // Criação da nova matriz trocando colunas
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                mat2[i][0] = mat1[i][1]; }
            else if (j == 1)
            {
                mat2[i][1] = mat1[i][0]; }
            else if (j == 2)
            {
                mat2[i][2] = mat1[i][3]; }
            else if (j == 3)
            {
                mat2[i][3] = mat1[i][2]; }
        }
    }
    // Impressão da nova matriz
    printf("\nMatriz nova:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}
