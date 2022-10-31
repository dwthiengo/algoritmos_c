#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldoMedio , credito1 , credito2 , credito3;

    printf("Insira o seu saldo medio no ultimo ano: ");
    scanf("%f" , &saldoMedio);

    credito1 = saldoMedio * 1.2;
    credito2 = saldoMedio * 1.3;
    credito3 = saldoMedio * 1.4;


    if (saldoMedio <= 200)
        printf("Sentimos muito em informar, mas nenhum credito foi concedido. ");
    else if(saldoMedio > 200 & saldoMedio <= 400)
        printf("Foi concedido um credito de %.2f reais" , credito1);
    else if(saldoMedio > 400 & saldoMedio <= 600)
        printf("Foi concedido um credito de %.2f reais" , credito2);
    else if(saldoMedio > 600)
        printf("Foi concedido um credito de %.2f reais" , credito3);

    return 0;
}
