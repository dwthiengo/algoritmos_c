#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numero, acumulado;

    printf("Insira um numero: ");
    scanf("%d", &numero);
    acumulado = 1;

    for(i=1; i <= numero; i++){
    acumulado = acumulado * i;
    }
    printf("Fatorial de %d e: %d\n",numero , acumulado);
}

