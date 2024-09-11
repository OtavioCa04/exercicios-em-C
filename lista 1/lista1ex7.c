#include <stdlib.h>
#include <stdio.h>

int main()
{

    int idade, maior = 0, contador = 0, soma = 0, menor = 999, contdez = 0;
    float med;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    while (idade > 0)
    {
        // recebe a idade e faz a soma
        soma += idade;
        contador++;

        // Pega a maior idade
        if (idade > maior)
        {
            maior = idade;
        }

        // Pega a menor idade
        if (idade < menor)
        {
            menor = idade;
        }

        // Conta quantas idades sao maiores que 10
        if (idade > 10)
        {
            contdez++;
        }

        printf("Digite a proxima idade ou zero para encerrar: \n");
        scanf("%i", &idade);
    }

    if (contador == 0)
    {
        printf("Nenhuma idade valida foi inserida. \n");
    }

    med = soma / contador;

    printf("Média das idades: %.2f\n", med);
    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Quantidade de idades menores que 10: %d\n", contdez);
}