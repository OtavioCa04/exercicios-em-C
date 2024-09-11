#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char nome[10][50];
    int i, indice;
    float peso[10], total=0, media, menor=999999;

    for (i = 0; i < 10; i++)
    {
        printf("Escreva seu nome: \n");
        scanf("%s", nome[i]);
        printf("Escreva seu peso: \n");
        scanf("%f", &peso[i]);
    
        //calcula o total dos pesos para a media
        total+=peso[i];

        //pega o menor peso e o nome da pessoa
        if (peso[i]<menor)
        {
            menor=peso[i];
            indice=i;
        }
        
    }
    
    media=total/10;
    printf("Media dos pesos: %.2f \n", media);
    printf("Menor peso e nome : %s - %.2f \n", nome[indice], menor);
    printf("Relatorio nome e peso de todos: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%s - %.2f \n", nome[i], peso[i]);
    }
    
}