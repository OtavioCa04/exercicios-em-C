
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int matriz[5][3], i, j, total[5], maior, menor=0, geral=0;
    char nome[5][15];

    for (i = 0; i < 5; i++)
    {
        printf("Insira o nome do %dº vendedor: \n", i + 1);
        scanf("%s", nome[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Escreva a valor de venda do %dº mes do %s. \n", j + 1, nome[i]);
            scanf("%d", &matriz[i][j]);
            // calcula o valor total vendido por vendedor
            total[i] += matriz[i][j];
            geral+=matriz[i][j];
        }
    }
    maior = matriz[0][0];
    menor = matriz[0][2];

    for (i = 0; i < 5; i++)
    {
        // calcula a maior do mes 1
        if (maior < matriz[i][0])
        {
            
            maior = matriz[i][0];
        }
        //calcula o menor do mes 3
        if (menor>matriz[i][2])
        {
            menor = matriz[i][2];
        }
    }
    for (i = 0; i < 5; i++)
    {
        // mostra o total de vendas por vendedor
        printf("O total de vendas do %s foi %d. \n", nome[i], total[i]);
        
    }  

    printf("A maior venda do mes 1 foi: %d \n", maior);
    printf("A menor venda do mes 3 foi: %d \n", menor);
    printf("Total vendido por todos os vendedores: %d \n", geral);
}