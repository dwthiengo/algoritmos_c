#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoPrato , valorConta , valorBebida;

    printf("C A I X A");

    for (int i=0; i<=1000; i++)
    {
        printf("\nInsira o peso do seu prato em gramas: ");
        scanf("%f", &pesoPrato);
        printf("\nInsira o valor gasto com bebida: ");
        scanf("%f", &valorBebida);
        if(pesoPrato == 0 && valorBebida == 0){
            break;
        }
        valorConta = ((pesoPrato * 0.001) * 23.59) + valorBebida ;
        printf("\nO valor da conta e igual a %.2f reais.\n", valorConta);

    }

}
