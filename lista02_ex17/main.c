#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo , quantidade;
    float pedido01 , pedido02 , pedido03 , pedido04 , pedido05 , pedido06;

    printf("01 - Cachorro-quente \n 02 - Bauru \n 03 - Misto-quente \n 04 - Hamburguer \n 05 - Cheeseburguer \n 06 - Refrigerante \n Insira o codigo do seu pedido: ");
    scanf("%d" , &codigo);

    if (codigo != 01 && codigo != 02 && codigo != 03 && codigo != 04 && codigo != 05 && codigo != 06)
        printf("Codigo  invalido");

    else {printf("Insira a quantidade do seu pedido: ");
    scanf("%d" , &quantidade);

    pedido01 = quantidade * 11;
    pedido02 = quantidade * 8.5;
    pedido03 = quantidade * 8;
    pedido04 = quantidade * 9;
    pedido05 = quantidade * 10;
    pedido06 = quantidade * 4.5;


    if (codigo == 01)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido01);
    else if (codigo == 02)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido02);
    else if (codigo == 03)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido03);
    else if (codigo == 04)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido04);
    else if (codigo == 05)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido05);
    else if (codigo == 06)
        printf("O valor do seu pedido e igual a %.2f reais" , pedido06);


    }

    return 0;
}
