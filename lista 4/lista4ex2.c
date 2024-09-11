#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[3][5], i, j, menor, maior, multiplos;

    for (i = 0; i < 3; i++)
    {
        printf("Escreva os numeros da %d linha. \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Escreva os numeros da %d coluna. \n", j + 1);
            scanf("%d", &num[i][j]);
        }
    }

    menor = acha_menor(num);
    maior = acha_maior(num);
    multiplos = acha_multiplos(num);

    printf("O menor numero da matriz eh: %d\n", menor);
    printf("O maior numero da terceira coluna da matriz eh: %d\n", maior);
    printf("Soma dos numeros multiplos de 3: %d\n", multiplos);
}

// acha o menor numero
int acha_menor(int n[3][5])
{
    int menor = n[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (n[i][j] < menor)
            {
                menor = n[i][j];
            }
        }
    }

    return menor;
}

// acha o maior numero da terceira coluna
int acha_maior(int n[3][5])
{
    int maior = n[0][2];

    for (int i = 0; i < 3; i++)
    {
        if (n[i][2] > maior)
        {
            maior = n[i][2];
        }
    }

    return maior;
}

int acha_multiplos(int n[3][5])
{
    int multiplos = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (n[i][j] % 3 == 0)
            {
                multiplos += n[i][j];
            }
        }
    }

    return multiplos;
}