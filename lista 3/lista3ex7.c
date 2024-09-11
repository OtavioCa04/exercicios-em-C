#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
 
    float nota[5][4], media[5], soma = 0, maior;
    char nome[5][20];
    int i, j, indice;
 
    for (i = 0; i < 5; i++)
    {
        soma=0;
        printf("Escreva o nome do %dº aluno: \n", i + 1);
        scanf("%s", &nome[i][20]);
        for (j = 0; j < 4; j++)
        {
            printf("Escreva a %dª nota: \n", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }
        // pega a media de cada aluno e armazena no vetor
        media[i] = soma / 4;
    }
 
    maior = media[0];
    for (i = 0; i < 5; i++)
    {
        if (maior < media[i])
        {
            maior = media[i];
            indice = i;
        }
    }
 
    printf("\nNota e media do aluno: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s - %.2f \n", nome[i], media[i]);  
    }
   
    printf("\nMaior media foi: %s - %.2f \n", nome[indice], maior);
}