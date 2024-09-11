#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, primos;

    printf("Escreva um numero: \n");
    scanf("%d", &num);

    primos = verifica_primos(num);

    if (primos)
    {
        printf("Numero primo");
    }
    else
    {
        printf("Numero nao primo");
    }
    
    return 0;
}

int verifica_primos(int n1)
{

    int cr = 0;
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            cr++;
        }
    }
    if (cr == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}