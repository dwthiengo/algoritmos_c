#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero ;
    int centena;
    int dezena ;
    int unidade;
    int sobra;

    printf("Digite um numero: ");
    scanf("%d" , &numero);

    centena = numero /100;
    sobra = numero - (centena*100);
    dezena = sobra/10;
    unidade = sobra - (dezena*10);


    printf("Centena: %d \nDezena: %d \nUnidade: %d \n" , centena , dezena , unidade);

    return 0;
}
