#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[10], b[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d° numero do grupo A \n", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d° numero do grupo B \n", i+1);
        scanf("%d", &b[i]);
    }
    
    printf("Numeros do grupo A: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d. ", a[i]);
    }
    printf("\nNumeros do grupo B: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d. ", b[i]);
    }
    
    printf("\nNumeros do grupo C: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d - %d - ", a[i], b[i]);
    }
}
