#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira o numero: ");
    scanf("%d" , &numero);

    if ( numero % 2 == 0)
        printf("O numero e par");
        else
            printf("o numero e impar");
}
