#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, a, rest, sp = 0, cr, qtd = 0, qtd3 = 0;
    float m3 = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%i", &num);
        // verifica e soma os numeros primos
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
            sp = sp + num;
        }
        // quatidade de numeros entre 10 e 20
        if (num >= 10 && num <= 20)
        {
            qtd++;
        }
        // dividiveis por 3 e maiores que dez
        if (num % 3 == 0 && num > 10)
        {
            m3 += num;
            qtd3++;
        }
    }
    m3 = m3 / qtd3;
    printf("Media dos numeros divisiveis por 3 e maiores que 10: %.2f \n", m3);
    printf("Quantidade de numeros entre 10 e 20: %i \n", qtd);
    printf("A soma dos numeros primos: %i", sp);
}