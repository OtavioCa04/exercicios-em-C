#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char produto[5][50];
    int i, indicemaior, qtd10=0, qtdmedia=0;
    float valor[5], maior = 0, media, total=0;

    for (i = 0; i < 5; i++)
    {
        // lê os 5 produto
        printf("Digite o nome do produto %d: \n", i + 1);
        scanf("%s", produto[i]);
        printf("Digite o preco do %s: \n", produto[i]);
        scanf("%f", &valor[i]);

        // pega o maior valor e o indice para o nome
        if (valor[i] > maior)
        {
            maior = valor[i];
            indicemaior = i;
        }
        //conta os produtos que tem valor menor que dez reais
        if (valor[i]<10)
        {
            qtd10++;
        }
        //calcula o total dos valores para o calculo da media
        total+=valor[i];
    }
    //calcula a media
    media=total/5;
    //calcula os numeros maiores que a media
    for (i = 0; i < 5; i++)
    {
        if (valor[i]>media)
        {
            qtdmedia++;
        }
    }
    printf("O maior preco foi do %s: %.2f \n", produto[indicemaior], maior);
    printf("Numero de produtos com valor menor que dez: %d \n", qtd10);
    printf("Media de precos foi: %.2f \n", media);
    printf("Quantidade de produtos com preco maior que a media: %d \n", qtdmedia);
    printf("Lista dos produtos: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s - %.2f \n", produto[i], valor[i]);
    }
    
}