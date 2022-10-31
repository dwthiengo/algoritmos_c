#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1 , y1 , x2 , y2;
    double resp1 , resp2;
    float distancia , diferenca;

    printf("Insira o x do primeiro ponto: ");
    scanf ("%f" , &x1);
    printf("Insira o y do primeiro ponto: ");
    scanf ("%f" , &y1);
    printf("Insira o x do segundo ponto: ");
    scanf ("%f" , &x2);
    printf("Insira o y do segundo ponto: ");
    scanf ("%f" , &y2);

    resp1 = pow((x1 - x2) , 2);
    resp2 = pow ((y1 - y2) , 2);
    diferenca = resp1 + resp2;
    distancia = sqrt(diferenca);
    printf("A distancia entre os dois pontos e igual a %.2f" , distancia );



    return 0;
}
