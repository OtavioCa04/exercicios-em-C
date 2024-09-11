#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int idade[10], i, menor = 0, qtd20 = 0, somaid = 0, maiormed = 0;
    float media = 0;
 
    for (i = 0; i < 10; i++)
    {
        printf("Escreva sua idade: \n");
        scanf("%i", &idade[i]);
 
        if (i==0)
        {
            menor=idade[0];
        }
       
        // pega a menor idade digitada
        if (idade[i] < menor)
        {
            menor = idade[i];
        }
 
        // quantidade de pessoas entre 20 e 30 anos
        if (idade[i] >= 20 && idade[i] <= 30)
        {
            qtd20++;
        }
 
        // soma as idade para fazer a media
        somaid += idade[i];
    }
 
    media = somaid / 10;
 
    for (i = 0; i < 10; i++)
    {
        if (idade[i] > media)
        {
            maiormed++;
        }
    }
 
    printf("Menor idade: %d \n", menor);
    printf("Media das idades: %.2f \n", media);
    printf("Quantidade de pessoas entre 20 e 30 anos: %d \n", qtd20);
    printf("Quantidade de pessoas com idade maior que a media: %d \n", maiormed);
}