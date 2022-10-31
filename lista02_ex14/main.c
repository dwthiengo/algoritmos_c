#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float valor , taxa1 , taxa2;

    printf("Insira o ano de fabricacao do carro (YYYY): ");
    scanf("%d" , &ano);
    printf("Insira o valor de tabela do carro: ");
    scanf("%f" , &valor);

    taxa1 = valor * 0.01;
    taxa2 = valor * 0.015;

    if (ano < 1990)
        printf("A taxa a ser paga pela transferencia do carro e igual a %.2f reais" , taxa1);
    else if (ano >=1990)
        printf("A taxa a ser paga pela transferencia do carro e igual a %.2f reais" , taxa2);

    return 0;
}
