#include <stdio.h>

void main() {
    // Declaração das variáveis
    float vendas[5][3]; // Matriz de vendas (5 vendedores x 3 meses)
    float mediaVendas[5]; // Vetor para médias de vendas
    char nomesVendedores[5][50]; // Vetor para nomes dos vendedores

    // Preenchendo a matriz de vendas e o vetor de nomes dos vendedores
    printf("Insira os valores de venda para cada vendedor e mês:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Vendedor %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomesVendedores[i]); // Obtém o nome do vendedor
        for (int j = 0; j < 3; j++) {
            printf("Mes %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    // Calculando a média de vendas de cada vendedor
    for (int i = 0; i < 5; i++) {
        float somaVendas = 0;
        for (int j = 0; j < 3; j++) {
            somaVendas += vendas[i][j];
        }
        mediaVendas[i] = somaVendas / 3;
    }

    // Imprimindo as médias de vendas de todos os vendedores
    printf("\n\nMedias de Vendas por Vendedor\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Vendedor: %s - Media: %.2f\n", nomesVendedores[i], mediaVendas[i]);
    }

    // Imprimindo o relatório de vendas do segundo vendedor
    int indiceSegundoVendedor = 1; // Índice do segundo vendedor (assumindo que o índice começa em 0)
    printf("\n\nRelatorio de Vendas - Segundo Vendedor\n\n");
    printf("Vendedor: %s\n", nomesVendedores[indiceSegundoVendedor]); // Exibe o nome do segundo vendedor
    printf("Vendas - Mes 1: %.2f\n", vendas[indiceSegundoVendedor][0]);
    printf("Vendas - Mes 2: %.2f\n", vendas[indiceSegundoVendedor][1]);
    printf("Vendas - Mes 3: %.2f\n\n", vendas[indiceSegundoVendedor][2]);

    // Calculando a média geral das vendas
    float mediaGeral = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            mediaGeral += vendas[i][j];
        }
    }
    mediaGeral /= (5 * 3);
    printf("Media Geral das Vendas: %.2f\n", mediaGeral);
}
