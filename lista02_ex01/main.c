#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 , numero2 ;
    int maiorNumero;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &numero1);
    printf("Insira o segundo numero: ");
    scanf("%d" , &numero2);

    if ( numero1 > numero2)
        maiorNumero = numero1;
    if ( numero2 > numero1)
        maiorNumero = numero2;

    printf("O maior numero e %d" , maiorNumero);
}
