#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float baseMenor , baseMaior , altura , area;

    printf("Insira a medida da menor base do trapezio (em cm): ");
    scanf("%f" , &baseMenor);
    printf("Insira a medida da maior base do trapezio (em cm): ");
    scanf("%f" , &baseMaior);
    printf("Insira a medida da altura do trapezio (em cm): ");
    scanf("%f" , &altura);
    area = ((baseMenor + baseMaior) * altura) / 2;
    printf("Dadas as medidas, a area do trapezio e igual a %.2f centimetros quadrados" , area);

    return 0;
}
