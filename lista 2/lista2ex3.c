#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5], b[5], c[10];
    int i, perfeitos = 0;

    printf("Digite 5 números para preencher o vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Digite 5 números para preencher o vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }
    //junta o vetor A e B para formar o C
    for (i = 0; i < 5; i++) {
        c[i] = a[i];
        c[i + 5] = b[i];
    }

    for (i = 0; i < 10; i++) {
        int num = c[i];
        int soma = 0;
        //encontra a soma dos divisores próprios
        for (int j = 1; j <= num / 2; j++) {
            if (num % j == 0) {
                soma += j;
            }
        }
        //verifica se o número é perfeito
        if (soma == num) {
            perfeitos++;
        }
    }

    printf("\nNumeros do vetor A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\nNumeros do vetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\nNumeros do vetor C: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\nTotal de números perfeitos: %d\n", perfeitos);
}