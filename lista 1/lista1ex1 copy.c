#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    printf("Digite em numero o mes que deseja: \n");
    scanf("%i", &num);
    switch (num)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("MArco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("MAio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("NOvembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Tente novamente, mes invalido.");
        break;
    }
}