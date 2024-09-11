#include <stdio.h>
#include <stdlib.h>

// Prototipação da função
void converte_conceito(float nota);

int main()
{
    float nota;

    printf("Escreva a nota do estudante: ");
    scanf("%f", &nota);

    converte_conceito(nota);

    return 0;
}

// Função que converte a nota para um conceito e imprime o resultado
void converte_conceito(float nota)
{
    char conceito;

    if (nota >= 9.0 && nota <= 10.0)
    {
        conceito = 'A';
    }
    else if (nota >= 7.0 && nota < 9.0)
    {
        conceito = 'B';
    }
    else if (nota >= 5.0 && nota < 7.0)
    {
        conceito = 'C';
    }
    else if (nota >= 3.0 && nota < 5.0)
    {
        conceito = 'D';
    }
    else if (nota >= 0.0 && nota < 3.0)
    {
        conceito = 'E';
    }
    else
    {
        printf("Nota invalida.\n");
        return;
    }

    printf("O conceito do estudante eh: %c\n", conceito);
}
