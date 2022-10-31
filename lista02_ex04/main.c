#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float numero , dobro , triplo;


    printf("Insira o numero: ");
    scanf("%f" , &numero);

    if ( numero > 0)
        printf("O numero e positivo, o dobro dele e igual a %.2f" , dobro = numero * 2);
    if ( numero < 0 )
        printf("O numero e negativo, o dobro dele e igual a %.2f" , triplo = numero * 3);
    if ( numero == 0)
        printf("O numero e igual a 0, logo a operacao e invalida");
}
