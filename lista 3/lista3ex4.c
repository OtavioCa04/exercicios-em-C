#include <stdio.h>
#include <stdlib.h>
int main(){
    int num[4][3], i, j, cr, primos=0, maior, somalin=0;
    float media=0, somamed=0;
 
    for (i = 0; i < 4; i++)
    {
        printf("Insira os números da %dª linha:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("Insira os numeros da %dª coluna: \n", j+1);
            scanf("%d", &num[i][j]);
        }
    }
    maior = num[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //ve se o numero é primo e soma
            cr=0;
            for (int k = 1; k <= num[i][j]; k++)
            {
                if (num[i][j] % k == 0)
                {
                    cr++;
                }
            }
            if (cr == 2)
            {
                primos+=num[i][j];
            }
            //pega o maior numero da matriz
            if (maior<num[i][j])
            {
                maior=num[i][j];
            }
            //soma para calcular a media
            somamed+=num[i][j];
            //pega a soma dos numeros da 2a e 4a linha da matriz
            if (i == 1 || i == 3)
            {
                somalin+=num[i][j];
            }
        }
    }
    media=somamed/12;
    printf("\nSoma dos numeros primos: %d\n", primos);
    printf("O maior numero foi: %d \n", maior);
    printf("A media dos numeros foi: %.2f \n", media);
    printf("Soma dos numeros da 2ª e 4ª coluna: %d", somalin); 
}