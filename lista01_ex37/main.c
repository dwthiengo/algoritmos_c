#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero , tabuada1 , tabuada2 ,tabuada3 ,tabuada4 , tabuada5 , tabuada6 , tabuada7 , tabuada8 , tabuada9 , tabuada10;

    printf("Insira um numero: ");
    scanf("%d" , &numero);

    tabuada1 = 1 * numero;
    tabuada2 = 2 * numero;
    tabuada3 = 3 * numero;
    tabuada4 = 4 * numero;
    tabuada5 = 5 * numero;
    tabuada6 = 6 * numero;
    tabuada7 = 7 * numero;
    tabuada8 = 8 * numero;
    tabuada9 = 9 * numero;
    tabuada10 = 10 * numero;

    printf ("A tabuada do numero %d e: \n 1 X %d = %d \n 2 x %d = %d \n 3 x %d = %d \n 4 x %d = %d \n 5 x %d = %d \n 6 x %d = %d \n 7 x %d = %d \n 8 x %d = %d \n 9 x %d = %d \n 10 x %d = %d \n" , numero, numero, tabuada1, numero, tabuada2, numero, tabuada3, numero, tabuada4, numero, tabuada5, numero, tabuada6, numero, tabuada7, numero, tabuada8, numero, tabuada9, numero, tabuada10);

    return 0;
}
