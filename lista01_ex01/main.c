#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A;
    double B;
    double resultado;

    printf("Digite o comprimento: ");
    scanf("%lf", &A);
    printf("Digite a largura: ");
    scanf("%lf", &B);
    resultado = A * B ;
    printf ("A area do terreno e %.2lf metros quadrados \n" , resultado);

    return 0;
}
