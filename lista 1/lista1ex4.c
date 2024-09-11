#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, opiniao, total = 0, qtdotimo = 0, bom, regular;
    float med;
    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    while (idade > 0)
    {
        printf("Digite sua opiniao sobre o filme: 3-Otimo 2-Bom 1-Regular \n");
        scanf("%i", &opiniao);
        switch (opiniao)
        {
        case 3:
            printf("Sua opiniao foi: Otimo \n");
            qtdotimo++;
            total += idade;
            break;
        case 2:
            printf("Sua opiniao foi: Bom \n");
            bom++;
            break;
        case 1:
            printf("Sua opiniao foi: Regular \n");
            regular++;
            break;
        default:
            printf("Opcao Invalida! \n");
            break;
        }
        printf("Digite sua idade ou zero para sair: \n");
        scanf("%i", &idade);
    }

    if (qtdotimo > 0)
    {
        med = total / qtdotimo;
    }
    else
    {
        printf("Ninguem achou o fime otimo. \n");
    }
    printf("Media das idades das pessoas que acharam o filme otimo: %.2f \n", med);
    printf("Quantidade de pessoas que acharam bom: %i \n", bom);
    printf("Quantidade de pessoas que acharam regular: %i \n", regular);
}