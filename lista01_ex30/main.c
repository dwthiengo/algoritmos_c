#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioFixo , salarioTotal , vendas , comissao;

    printf("Insira o salario fixo: ");
    scanf("%f" , &salarioFixo);
    printf("Insira o valor total de vendas: ");
    scanf("%f" , &vendas);
    comissao = vendas * 4 / 100;
    salarioTotal = salarioFixo + comissao;
    printf ("O funcionario deve receber um salario fixo de %.2f reais mais uma comissao de %.2f reais, totalizando %.2f reais" , salarioFixo , comissao , salarioTotal);

    return 0;
}
