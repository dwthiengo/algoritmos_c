#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado , area;

    printf("Insira a medida do lado do quadrado: ");
    scanf("%f" , &lado);
    area = lado * lado ;
    printf("Dada a medida do lado, a area do quadrado e igual a %.2f centimetros quadrados" , area);

    return 0;
}
