#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numero1 , numero2 , numero3 ;
    int maiorNumero , meioNumero , menorNumero;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &numero1);
    printf("Insira o segundo numero: ");
    scanf("%d" , &numero2);
    printf("Insira o terceiro numero: ");
    scanf("%d" , &numero3);

    //MaiorNumero

    if ( numero1 >= numero2 && numero1 >= numero3)
        maiorNumero = numero1;
    if ( numero2 >= numero1 && numero2 >= numero3)
        maiorNumero = numero2;
    if ( numero3 >= numero1 && numero3 >= numero2)
        maiorNumero = numero3;

    //NumeroMeio

    if ( numero1 >= numero2 && numero1 <= numero3 || numero1 >= numero3 && numero1 <= numero2)
        meioNumero = numero1;
    if ( numero2 >= numero1 && numero2 <= numero3 || numero2 >= numero3 && numero2 <= numero1)
        meioNumero = numero2;
    if ( numero3 >= numero1 && numero3 <= numero2 || numero3 >= numero2 && numero3 <= numero1)
        meioNumero = numero3;

    //MenorNumero

    if ( numero1 <= numero2 && numero1 <= numero3)
        menorNumero = numero1;
    if ( numero2 <= numero1 && numero2 <= numero3)
        menorNumero = numero2;
    if ( numero3 <= numero1 && numero3 <= numero2)
        menorNumero = numero3;

    printf("A ordem decrescente e %d , %d , %d" , maiorNumero , meioNumero , menorNumero);
}
