#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    float altura;
    float volume;
    double resp;

    printf("Insira a medida do raio da caixa: ");
    scanf("%f" , &raio);
    printf("Insira a medida da altura da caixa: ");
    scanf("%f" , &altura);
    resp = pow(raio , 2);
    volume = altura * resp * 3.14;

    printf("O volume da caixa cilindrica e igual a %.2f centimetros cubicos" , volume);


    return 0;
}
