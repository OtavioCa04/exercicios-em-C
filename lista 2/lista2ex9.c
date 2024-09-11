#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char  nome[10][15];
    float nota[10], maior=0, media, total=0;
    int qtd=0, indice=0, qtdmaior=0;
 
    for (int i = 0; i < 10; i++)
    {
        printf("Digite seu nome: \n");
        scanf("%s", nome[i]);
        printf("Digite sua nota: \n");
        scanf("%f", &nota[i]);
 
        //quantidade de alunos com nota menor que 5
        if (nota[i]<5)
        {
            qtd++;
        }
       
        //maior nota e nome
        if (nota[i]>maior)
        {
            maior=nota[i];
            indice=i;
        }
       
        //pega o total das notas para o calculo da media
        total+=nota[i];
    }
 
    media=total/10;
 
    //calcula a quantidade de notas maior que a media
    for (int i = 0; i < 10; i++)
    {
        if (nota[i]>media)
        {
            qtdmaior++;
        }
       
    }
   
   
    printf("\nQuantidade de alunos com nota menor que 5: %d \n", qtd);
    printf("Nome do aluno com maior nota: %s - %.2f \n", nome[indice], maior);
    printf("Media das notas: %.2f \n", media);
    printf("Quantidade de alunos com nota maior que a media: %d \n", qtdmaior);
}