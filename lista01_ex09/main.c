#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pequena;
    float media ;
    float grande ;

    printf ("Digite o numero de camisas P: ");
    scanf ("%f", &pequena);
    printf ("Digite o numero de camisas M: ");
    scanf ("%f", &media);
    printf ("Digite o numero de camisas G: ");
    scanf ("%f", &grande);
    printf ("Valor total: %.2f reais" , pequena  * 10 + media * 12 + grande * 15);
}
