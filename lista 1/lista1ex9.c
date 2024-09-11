#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade, peso, i, qtd70 = 0, maior = 0, qtd30 = 0, soma30 = 0, somaid = 0, qtdid = 0;
    float med30 = 0, medid = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        printf("Digite seu peso: \n");
        scanf("%d", &peso);

        // calcula quantidade de pessoas com mais de 70 quilos
        if (peso > 70)
        {
            qtd70++;
        }
        // Pega o maior peso
        if (peso > maior)
        {
            maior = peso;
        }
        // media das idades das pessoas entre 30 e 40 anos
        if (idade >= 30 && idade <= 40)
        {
            qtd30++;
            soma30 += idade;
        }
        // media de todas as idades
        if (idade > 0)
        {
            qtdid++;
            somaid += idade;
        }
    }
    if (qtdid > 0)
    {
        medid = somaid / qtdid;
    }
    if (qtd30 > 0)
    {
        med30 = soma30 / qtd30;
    }

    printf("Media das idades: %.2f \n", medid);
    printf("Maior peso: %d \n", maior);
    printf("Media das idades de pessoas entre 30 e 40 anos: %.2f \n", med30);
    printf("Quantidade de pessoas maiores que 70 quilos: %d \n", qtd70);
}