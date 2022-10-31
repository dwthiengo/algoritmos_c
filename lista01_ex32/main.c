#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pesoKilos , pesoGramas;

    printf("Insira seu peso em kilos: ");
    scanf("%f" , &pesoKilos);
    pesoGramas = pesoKilos * 1000;
    printf("Se voce pesa %.2f kg, isso significa que voce pesa %.2f gramas" , pesoKilos , pesoGramas);

    return 0;
}
