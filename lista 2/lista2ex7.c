#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[10], i, qtdimp = 0, qtddiv = 0, divisiveis = 0, primos = 0;
    float media;

    for (i = 0; i < 10; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%d", &num[i]);

        // quantidade dos impares e maiores que dez
        if (num[i] > 10 && num[i] % 2 == 1)
        {
            qtdimp++;
        }
        // pega o total de numeros divisiveis por tres para calcular a media
        if (num[i] % 3 == 0)
        {
            qtddiv++;
            divisiveis += num[i];
        }
        // ve se o numero e primo e soma todos
        int cr = 0;
        for (int j = 1; j <= num[i]; j++)
        {
            if (num[i] % j == 0)
            {
                cr++;
            }
        }
        if (cr == 2)
        {
            primos += num[i];
        }
    }

    media = divisiveis / qtddiv;

    printf("A soma dos numeros primos foi: %d", primos);
    printf("\nQuantidade de numeros impares e maior que dez: %d\n", qtdimp);
    printf("Media dos numeros divisiveis por 3: %.2f", media);
}