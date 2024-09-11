#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
 
    char nome[5][10];
    float venda[5], total=0, media, maior=0;
    int qtd=0, indice=0;
   
    for (int i = 0; i < 5; i++)
    {
        printf("Escreva seu nome: \n");
        scanf("%s", nome[i]);
        printf("Escreva o total de suas vendas : \n");
        scanf("%f", &venda[i]);
 
        //pega o total bruto das vendas
        total+=venda[i];
    }
    //calcula o total da media
    media=total/5;    

    //soma quantos vendedores venderam mais que a media
    for (int i = 0; i < 5; i++)
    {
        if (venda[i]>media)
        {
            qtd++;
        }    
    }

    printf("\nTotal bruto das vendas: R$%.2f \n", total);
    printf("Media do valor de vendas: R$%.2f \n", media);
    printf("Quantidade de vendedores que venderam mais que a media: %d \n", qtd);
    printf("Total de comissao que cada um deve receber: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s - R$%.2f \n", nome[i], venda[i]*0.10);
        if (venda[i]>maior)
        {
            maior=venda[i];
            indice=i;
        }  
    }
    printf("O vendedor com maior numero de vendas foi o: %s - R$%.2f", nome[indice], maior);
}