#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 , numero2 ;
    int iguais , diferentes;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &numero1);
    printf("Insira o segundo numero: ");
    scanf("%d" , &numero2);

    if ( numero1 == numero2){
        printf("Os numeros sao iguais, a soma e igual a %d" , iguais = numero1 + numero2);
        }else
            printf("OS numeros sao diferentes, a multiplicacao entre eles e igual a %d" , diferentes = numero1 * numero2);
}
