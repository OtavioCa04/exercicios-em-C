#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num, i, qtdimp = 0, m5 = 0, a, cr, rest, qtdprim = 0;
    float mi = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%i", &num);

        // Acha os numeros impares maiores que dez
        if (num > 10 && num % 2 == 1)
        {
            mi += num;
            qtdimp++;
        }

        // Acha os multiplos de 5 e soma
        if (num % 5 == 0)
        {
            m5 += num;
        }

        // verifica os primos e calcula a quantidade
        cr = 0;
        for (a = 1; a <= num; a++)
        {
            rest = num % a;
            if (rest == 0)
            {
                cr++;
            }
        }
        if (cr == 2)
        {
            qtdprim++;
        }
    }

    // Calcula a media dos numeros impares maiores que dez
        mi = mi / qtdimp;

        printf("Media dos numeros impares e maiores que dez: %.2f \n", mi);
        printf("Soma dos numeros multiplos de 5: %i \n", m5);
        printf("Quantidade de numeros primos: %i \n", qtdprim);
}