#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double raio;
    double area;
    double resp;

    printf("Insira o raio da pizza em centimetros: ");
    scanf ("%lf" , &raio);
    resp = pow(raio , 2);
    area = resp * 3.14 ;
    printf ("A sua pizza tem uma area de %.2lf centimetros quadrados" , area);

    return 0;
}
