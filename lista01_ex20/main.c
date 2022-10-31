#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int blusas, quantidadeNovelos;

    printf("Insira a quantidade de blusas: ");
    scanf("%d" , &blusas);
    //assumindo que cada blusa gasta 2 novelos por blusa
    quantidadeNovelos = 2 * blusas;
    printf("Para produzir %d blusas, serao necessarios %d novelos de la" , blusas , quantidadeNovelos);

    return 0;
}
