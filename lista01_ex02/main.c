#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A;
    double resultado;

    printf("Digite o numero de cavalos: ");
    scanf("%d", &A);
    resultado = A * 4 ;
    printf ("O numero de ferraduras necessarias e: %d \n" , resultado);
    return 0;
}
