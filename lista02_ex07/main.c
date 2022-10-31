#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero ;
    float altura , pesoHomem , pesoMulher;

    printf("Insira seu genero (h = homem ou m = mulher): ");
    scanf("%c" , &genero);

    if (genero != 'H' && genero != 'h' && genero != 'M' && genero != 'm'){
        printf("Codigo invalido");
    }else{
    printf("Insira sua altura: ");
    scanf("%f" , &altura);

    if ((genero == 'H' || genero == 'h'))
        printf("O seu peso ideal e %.2f kg" , pesoHomem =  (72.7 * altura) - 58);
    else if ((genero == 'M' || genero == 'm'))
        printf("O seu peso ideal e %.2f kg" , pesoMulher =   (62.1 * altura) - 44.7);
}
}
