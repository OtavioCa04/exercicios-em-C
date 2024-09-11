#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char cor[10][50], busca[50];
    int i, igual;

    printf("Digite dez cores: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Cor %d \n", i + 1);
        scanf("%s", cor[i]);

        for (int j = 0; cor[i][j] != '\0'; j++)
        {
            cor[i][j] = tolower(cor[i][j]);
        }
    }
    do
    {
        igual = 0;

        printf("Digite a cor que deseja buscar ou digite fim para terminar. \n");
        scanf("%s", busca);

        for (i = 0; busca[i] != '\0'; i++)
        {
            busca[i] = tolower(busca[i]);
        }

        if (strcmp(busca, "fim") != 0)
        {
            for (i = 0; i < 10; i++)
            {
                if (strcmp(cor[i], busca) == 0)
                {
                    printf("A cor foi encontrada. \n");
                    igual = 1;
                    break;
                }
            }
            if (igual == 0)
            {
                printf("Nome nao encontrado. \n");
            }
        }
    } while (strcmp(busca, "fim") != 0);
}
