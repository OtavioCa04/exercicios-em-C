#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont = 1, menor=999, somapar = 0, impar = 0, qtdmaior20 = 0, soma20 = 0;
    float med;

    while (cont <= 10)
    {
        printf("Digite o numero: \n");
        scanf("%i", &num);

        if (num < menor)
        {
            menor = num;
        }
        if (num % 2 == 0 && num > 10)
        {
            somapar += num;
        }
        if (num % 2 != 0)
        {
            impar++;
        }

        if (num > 20)
        {
            qtdmaior20++;
            soma20 += num;
        }

        cont++;
    }
    if (qtdmaior20 > 0)
    {
        med = soma20 / qtdmaior20;
    }

    printf("O menor numero foi %i \n", menor);
    printf("Soma dos numeros pares e maiores que 10: %i\n", somapar);
    printf("Total de numeros impares: %i\n", impar);
    printf("Media dos numeros maiores que 20: %.2f \n", med);
}