#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int mat[3][5], i , j, menor, soma=0, maior, somamed=0;
    float media=0;
 
    for (i = 0; i < 3; i++)
    {
        printf("Insira os números da %dª linha:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Insira os numeros da %dª coluna: \n", j+1);
            scanf("%d", &mat[i][j]);
 
            somamed+=mat[i][j];
        }
    }
    menor=mat[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            //acha o menor numero
            if (menor>mat[i][j])
            {
                menor=mat[i][j];
            }
            //soma os divisiveis por 3
            if (mat[i][j] % 3 == 0)
            {
                soma+=mat[i][j];
            }
            //maior da terceira coluna
            if (j ==2 && mat[i][j] > maior)
            {
                maior=mat[i][j];
            }
        }
    }
    media=somamed/15;
    printf("O menor numero da matriz foi: %d \n", menor);
    printf("A soma dos numeros divisiveis por tres foi: %d \n", soma);
    printf("O maior numero da 3ª coluna foi: %d \n", maior);
    printf("Media total: %.2f", media);
}