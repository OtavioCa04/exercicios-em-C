#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade=1, maiorid = 0, qtdsal = 0, pessoas = 0, mais5000 = 0;
    float salario, maiorsal = 0, medsal = 0, somasal = 0, porcentagem;
    while (idade > 0)
    {
        printf("Digite sua idade ou 0 para encerrar: \n");
        scanf("%i", &idade);

        if (idade<=0)
            break;
        
        printf("Digite seu salario: \n");
        scanf("%f", &salario);
        // Pega o maior salario e idade.
        if (salario > maiorsal)
        {
            maiorid = idade;
            maiorsal = salario;
        }
        // pega quantidade de pessoas entre 20 e 30 anos e soma seus salarios para calcular a media.
        if (idade >= 20 && idade <= 30)
        {
            qtdsal++;
            somasal += salario;
        }
        //pega a quantidade de pessoas que ganham mais que 5000.
        if (salario > 5000)
        {
            mais5000++;
        }
        //conta a qtd de pessoas
        pessoas++;
    }
    // calcula a media dos salarios das pessoas entre 20 e 30 anos.
    if (somasal > 0)
    {
        medsal = somasal / qtdsal;
    }
    //calcula a porcentagem das pessoas que ganham mais que 5000.
    porcentagem = (mais5000 / pessoas) * 100;

    printf("Maior salario e sua idade: R$ %.2f %d anos. \n", maiorsal, maiorid);
    printf("Media dos salarios das pessoas entre 20 e 30 anos: %.2f \n", medsal);
    printf("Porcentagem das pessoas que ganham mais que 5000 reais: %.2f \n", porcentagem);
}