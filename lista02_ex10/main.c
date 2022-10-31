#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1 , numero2 , diferenca1 , indiferenca , diferenca2 ;

    printf("Insira o primeiro numero: ");
    scanf("%f" , &numero1);
    printf("Insira o segundo numero: ");
    scanf("%f" , &numero2);

    diferenca1 = numero1 - numero2;
    diferenca2 = numero2 - numero1;
    indiferenca = 0;

    if (numero1 > numero2)
        printf("A diferenca entre o numero %.2f e o numero %.2f e igual a %.2f" , numero1 , numero2 , diferenca1);
    else if(numero1 < numero2)
        printf("A diferenca entre o numero %.2f e o numero %.2f e igual a %.2f" , numero2 , numero1 , diferenca2);
    else if (numero1 == numero2)
        printf("A diferenca entre o numero %.2f e o numero %.2f e igual a %.2f" , numero1 , numero2 , indiferenca);

    return 0;
}
