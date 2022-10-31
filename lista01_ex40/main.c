#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float primeiroCateto , segundoCateto , soma;
    double quadrado1 , quadrado2 , hipotenusa;

    printf("Insira o valor do primeiro cateto: ");
    scanf("%f" , &primeiroCateto);
    printf("Insira o valor do segundo cateto: ");
    scanf("%f" , &segundoCateto);
    quadrado1 = pow(primeiroCateto, 2);
    quadrado2 = pow(segundoCateto , 2);
    soma = quadrado1 + quadrado2;
    hipotenusa = sqrt(soma);
    printf("O valor da hipotenusa do tringulo com os catetos fornecidos e igual a %.2f centimetros" , hipotenusa);

    return 0;
}
