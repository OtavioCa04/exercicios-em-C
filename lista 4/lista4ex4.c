#include <stdio.h>
#include <stdlib.h>

// Prototipacao da funcao
float calcula_media(float nota1, float nota2, float nota3, char tipo);

int main()
{
    float nota1, nota2, nota3, media;
    char tipo;

    // Entrada das notas e do tipo de media
    printf("Escreva a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Escreva a terceira nota do aluno: ");
    scanf("%f", &nota3);
    printf("Escreva o tipo de media (A para aritmetica, P para ponderada): ");
    scanf(" %c", &tipo);

    // Chamada da funcao para calcular a media
    media = calcula_media(nota1, nota2, nota3, tipo);

    // Verificacao se o tipo de media e valido e impressao do resultado
    if (media >= 0)
    {
        printf("A media do aluno eh: %.2f\n", media);
    }
    else
    {
        printf("Tipo de media invalido.\n");
    }

    return 0;
}

// Funcao que calcula a media aritmetica ou ponderada das notas
float calcula_media(float nota1, float nota2, float nota3, char tipo)
{
    float media;

    if (tipo == 'A')
    {
        media = (nota1 + nota2 + nota3) / 3;
    }
    else if (tipo == 'P')
    {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    }
    else
    {
        // Retorna um valor negativo para indicar que o tipo de media e invalido
        return -1;
    }

    return media;
}
