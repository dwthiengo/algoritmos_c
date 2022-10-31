#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pesoAtual , novoPeso1 , novoPeso2 ;

    printf("Insira o seu peso atual: ");
    scanf("%f" , &pesoAtual);
    novoPeso1 = pesoAtual + (pesoAtual * 15 / 100);
    novoPeso2 = pesoAtual - (pesoAtual * 20 / 100);

    printf ("Se voce engordar 15 %% do seu peso atual voce ira pesar %.2f kg\n" , novoPeso1);
    printf ("Se voce emagrecer 20 %% do seu peso atual voce ira pesar %.2f kg" , novoPeso2);

    return 0;
}
