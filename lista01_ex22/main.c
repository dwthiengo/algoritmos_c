#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int moedas1Real , moedas50Cent , moedas25Cent , moedas10Cent , moedas5Cent , moedas1Cent;
    float valorEconomizado;

    printf("Insira a quantidade de moedas de 1 real: ");
    scanf ("%d" , &moedas1Real);
    printf("Insira a quantidade de moedas de 50 centavos: ");
    scanf ("%d" , &moedas50Cent);
    printf("Insira a quantidade de moedas de 25 centavos: ");
    scanf ("%d" , &moedas25Cent);
    printf("Insira a quantidade de moedas de 10 centavos: ");
    scanf ("%d" , &moedas10Cent);
    printf("Insira a quantidade de moedas de 5 centavos: ");
    scanf ("%d" , &moedas5Cent);
    printf("Insira a quantidade de moedas de 1 centavo: ");
    scanf ("%d" , &moedas1Cent);

    valorEconomizado = moedas1Real + (0.5 * moedas50Cent) + (0.25 * moedas25Cent) + (0.10 * moedas10Cent) + (0.05 * moedas5Cent) + (0.01 * moedas1Cent);
    printf ("Parabens! Voce economizou um total de %.2f reais" , valorEconomizado);

    return 0;
}
