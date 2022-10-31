#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sanduiches;
    float queijo;
    float presunto;
    float carne;

    printf("Insira o numero de sanduiches: \n");
    scanf("%f" , &sanduiches);
    printf ("Voce deve comprar %.2f kg de carne\n" , carne = sanduiches * 0.1);
    printf ("Voce deve comprar %.2f kg de queijo\n" , queijo = sanduiches * 0.1) ;
    printf ("Voce deve comprar %.2f kg de presunto\n" , presunto = sanduiches * 0.05);

    return 0;
}
