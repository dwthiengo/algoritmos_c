#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double conta;
    int contaAndre;
    double contaFelipe;
    int contaCarlos;

    printf("Insira o valor da conta: ");
    scanf("%lf", &conta);

    contaAndre = conta/3;
    contaCarlos = contaAndre;
    contaFelipe = conta - contaAndre - contaCarlos;

    printf ("Andre deve pagar %d reais \n" , contaAndre);
    printf ("Carlos deve pagar %d reais \n" , contaCarlos);
    printf ("Felipe deve pagar %.2f reais \n" , contaFelipe);
    return 0;
}
