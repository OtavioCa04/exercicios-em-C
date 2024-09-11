#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int matriz[10][3], i, j, idade[10], filhos[10], somasal=0, somafil=0, qtdfil=0, qtd=0;
    float salario[10], media, mediafil,med20, qtdsal=0;
 
    for (i = 0; i < 10; i++)
    {
        printf("Insira os dados da %dª pessoa. \n", i + 1);
        printf("Insira o salario: \n");
        scanf("%f", &salario[i]);
        printf("Insira a idade: \n");
        scanf("%d", &idade[i]);
        printf("Insira o numero de filhos: \n");
        scanf("%d", &filhos[i]);
 
        //pega a soma do salario e dos filhos para calcular a media
        somasal+=salario[i];
        somafil+=filhos[i]; 
        //pega a quantidade de filhos das pessoas entre  15 e 25 anos
        if (idade[i]>15 && idade[i]<25)
        {
            qtdfil+=filhos[i];
        }
        //pega a soma dos salarios das pessoas entre 20 e 30 anos para calcular a media
        if (idade[i]>20 && idade[i]<30)
        {
            qtdsal+=salario[i];
            qtd++;
        }
    }
    media=somasal/10;
    mediafil=somafil/10;
    if (qtd>0)
    {
        med20=qtdsal/qtd;
    }
   
    printf("A media dos salarios foi: %.2f \n", media);
    printf("A media do numero de filhos foi: %.2f \n", mediafil);
    printf("A quantidade de filhos das pessoas entre 15 e 25 anos foi: %d \n", qtdfil);
    printf("A media dos salarios das pessoas entre 20 e 30 anos foi: %.2f \n", med20);
}