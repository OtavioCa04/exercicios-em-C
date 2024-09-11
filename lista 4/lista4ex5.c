#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções
void preenche_matriz(float matriz[5][4], char nomes[5][50]);
void calcula_medias(float matriz[5][4], float medias[5]);
void imprime_medias(float medias[5], char nomes[5][50]);
void imprime_matriz(float matriz[5][4]);

int main()
{
    float notas[5][4];
    char nomes[5][50];
    float medias[5];

    // Preenche a matriz de notas e o vetor de nomes
    preenche_matriz(notas, nomes);

    // Calcula as médias dos alunos e armazena no vetor de médias
    calcula_medias(notas, medias);

    // Imprime as médias dos alunos
    printf("\nMedias dos alunos:\n");
    imprime_medias(medias, nomes);

    // Imprime a matriz de notas dos alunos
    printf("\nMatriz de notas:\n");
    imprime_matriz(notas);

    return 0;
}

// Função para preencher a matriz de notas e o vetor de nomes
void preenche_matriz(float matriz[5][4], char nomes[5][50])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);

        for (int j = 0; j < 4; j++)
        {
            printf("Digite a nota %d do aluno %s: ", j + 1, nomes[i]);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para calcular a média de cada aluno e armazenar em um vetor
void calcula_medias(float matriz[5][4], float medias[5])
{
    for (int i = 0; i < 5; i++)
    {
        float soma = 0.0;
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
        medias[i] = soma / 4;
    }
}

// Função para imprimir as médias dos alunos a partir do vetor
void imprime_medias(float medias[5], char nomes[5][50])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno: %s - Media: %.2f\n", nomes[i], medias[i]);
    }
}

// Função para imprimir a matriz de notas dos alunos
void imprime_matriz(float matriz[5][4])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }
}
