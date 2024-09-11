#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int mat[7][10], i, j, soma=0;
 
    for (i = 0; i < 6; i++)
    {
        printf("Escreva os numeros da %dª linha: \n", i+1);
        for (j = 0; j < 10; j++)
        {
            printf("Escreva os numeros da %dª coluna: \n", j+1);
            scanf("%d", &mat[i][j]);
        }
    }
 
    //faz a soma para a 7 linha
    for (j = 0; j < 10; j++)
    {
        soma=0;
        for (i = 0; i < 6; i++)
        {
            soma+=mat[i][j];
        }
 
        mat[6][j]=soma;        
    }
 
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d. ", mat[i][j]);
        }
        printf("\n");
    }
}