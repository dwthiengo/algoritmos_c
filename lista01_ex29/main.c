#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float precoInicial , precoComDesconto;

    printf("Insira o preco do produto: ");
    scanf("%f" , &precoInicial);
    precoComDesconto = precoInicial * 0.9;
    printf ("O preco final do produto considerando o desconto e igual a %.2f" , precoComDesconto);

    return 0;
}
