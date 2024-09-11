#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int num[4][6], i, j, qtd10=0, somapar=0, somacol=0;
    float media=0,somalin=0;
 
    for (i = 0; i < 4; i++)
    {
        printf("Insira os numeros da %dª linha:\n", i + 1);
        for (j = 0; j < 6; j++)
        {
            printf("Insira os numeros da %dª coluna: \n", j+1);
            scanf("%d", &num[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            //A quantidade de números que estão no intervalo entre 10 e 30
            if (num[i][j]>10 && num[i][j]<30)
            {
                qtd10++;
            }
            //A soma dos números maiores que 10 e pares
            if (num[i][j]>10 && num[i][j] % 2 == 0)
            {
                somapar+=num[i][j];
            }
            //A soma dos números que estão na quarta coluna da matriz
            if (j==3)
            {
                somacol+=num[i][j];
            }
            //A média dos números da matriz que estão na terceira linha
            if (i==2)
            {
                somalin+=num[i][j];
            }
        }
    }
    media=somalin/6;
 
    printf("\n A quantidade de numeros entre 10 e 30 foi: %d \n", qtd10);
    printf("A soma dos numeros maiores que 10 e pares foi: %d \n", somapar);
    printf("A Soma dos numeros da quarta coluna foi: %d \n", somacol);
    printf("A media dos numeros da terceira linha foi: %.2f", media);
}