#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, k, fat;

    for (i = 0; i < 10; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%i", &num);

        fat = 1;
        if (num >= 0)
        {
            for (k = 1; k <= num; k++)
            {
                fat *= k;
            }
            printf("A fatorial desse numero e: %i \n", fat);
        }
        else
        {
            printf("Tente novamente!! \n");
        }
    }
}