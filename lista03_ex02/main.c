#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numero1 , numero2, i, soma= 0;

    printf("Insira o inicio do intervalo: ");
    scanf("%d" , &numero1);
    printf("Insira o final do intervalo: ");
    scanf("%d" , &numero2);

    for (i = numero1; i <= numero2; i++){
    soma = soma + i;
    }
    printf("A somatorio entre %d e de %d = %d", numero1 , numero2 , soma);



}
