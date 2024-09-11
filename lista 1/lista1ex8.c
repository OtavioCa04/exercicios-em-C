#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num, i;

    printf("Digite um numero para calcular sua tabuada: \n");
    scanf("%d", &num);

    printf("Tabuada de %d: \n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", num, i, num * i);
    }
}