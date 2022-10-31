#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A;
    double B;
    double resultado;

    printf("Digite o preco do litro da gasolina: ");
    scanf("%lf", &A);
    printf("Digite o valor da sua conta do posto de gasolina: ");
    scanf("%lf", &B);
    resultado = B / A ;
    printf ("Voce conseguiu colocar %.2lf litros de gasolina\n" , resultado);
}
