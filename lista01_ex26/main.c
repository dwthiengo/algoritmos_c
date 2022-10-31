#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float primeiroNumero , segundoNumero , terceiroNumero;
    float multiplicacao1 , multiplicacao2 , multiplicacao3 , multiplicacao4;

    printf("Insira o primeiro numero: ");
    scanf ("%f" , &primeiroNumero);
    printf("Insira o segundo numero: ");
    scanf ("%f" , &segundoNumero);
    printf("Insira o terceiro numero: ");
    scanf ("%f" , &terceiroNumero);
    multiplicacao1 = primeiroNumero * segundoNumero ;
    multiplicacao2 = primeiroNumero * terceiroNumero;
    multiplicacao3 = segundoNumero * terceiroNumero ;
    multiplicacao4 = primeiroNumero * segundoNumero * terceiroNumero;

    printf ("O resultado da multiplicacao entre %.2f e %.2f e igual a %.2f\n" , primeiroNumero , segundoNumero , multiplicacao1);
    printf ("O resultado da multiplicacao entre %.2f e %.2f e igual a %.2f\n" , primeiroNumero , terceiroNumero , multiplicacao2);
    printf ("O resultado da multiplicacao entre %.2f e %.2f e igual a %.2f\n" , segundoNumero , terceiroNumero , multiplicacao3);
    printf ("O resultado da multiplicacao entre %.2f, %.2f e %.2f e igual a %.2f" , primeiroNumero , segundoNumero , terceiroNumero , multiplicacao4);


    return 0;
}
