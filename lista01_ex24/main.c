#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int quantidadeRefresco;
    float quantidadeAgua , quantidadeSuco;

    printf("Insira a quantidade de litros de refresco desejada: ");
    scanf ("%d" , &quantidadeRefresco);
    quantidadeAgua = quantidadeRefresco * 0.8;
    quantidadeSuco = quantidadeRefresco * 0.2;
    printf ("Voce ira prescisar de %.2f litros de agua e de %.2f litros de suco de maracuja" , quantidadeAgua , quantidadeSuco);

    return 0;
}
