#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, quantProduto;
    float precoProduto, valorGasto, valorConta=0;

    printf("C A I X A");

    for (int i=0; i<=1000; i++)
    {
        printf("\nInsira o quantidade do produto: ");
        scanf("%d", &quantProduto);
        printf("\nInsira o preco do produto: ");
        scanf("%f", &precoProduto);
        valorGasto = quantProduto * precoProduto;
        valorConta = valorConta + valorGasto;
        printf("\nO valor da conta e igual a %.2f reais.\n", valorConta);


    }

}
