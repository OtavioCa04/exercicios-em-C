#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j,num[2][6], maior, soma3=0, soma2=0, soma=0;
    float media=0, mediat=0, nmatriz[2][6];
    for (i = 0; i < 2; i++)
    {
        printf("Insira os numeros da %dª linha:\n", i + 1);
        for (j = 0; j < 6; j++)
        {
            printf("Insira os numeros da %dª coluna: \n", j+1);
            scanf("%d", &num[i][j]);
            soma+=num[i][j];
        }
    }
    maior=num[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            //pega o maior numero da matriz
            if (maior<num[i][j])
            {
                maior=num[i][j];} 
            //soma os numeros divisiveis por tres
            if (num[i][j] % 3 == 0)
            {
                soma3+=num[i][j]; }
            //soma os numeros da lina 2 para a soma da media
            if (i==1)
            {
                soma2+=num[1][j]; }
        }
    }
    //calcula a media dos numeros da linha 2
    media=soma2/6.0;
    //calcula a media 
    mediat=soma/12.0;
    printf("\nMaior numero da matriz: %d. \n", maior);
    printf("Soma dos numeros divisiveis por tres: %d. \n", soma3);
    printf("Media dos numeros da linha 2: %.2f \n", media);
    printf("Media total: %.2f \n", mediat);
    //nova matriz que eh o resultado da multiplicacao de cada elemento pela media total
    printf("Matriz nova contendo o resultado de cada elemento multiplicado pela media total: ");
    for (i = 0; i < 2; i++)
    {
        printf("\nLinha %d.\n", i+1);
        for (j = 0; j < 6; j++)
        {
            printf("%.2f. \n", num[i][j]*mediat);
        }
    }
}