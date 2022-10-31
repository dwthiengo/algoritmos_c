#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A;
    double B;
    double resultadopao;
    double resultadobroa;
    double conta;

    printf("Digite quantos paes foram vendidos:\n");
    scanf("%lf", &A);
    printf("Digite quantas broas foram vendidas: \n");
    scanf("%lf", &B);
    resultadopao = A * 0.12 ;
    printf("Valor arrecadado com os paes e igual a %.2f \n", resultadopao ) ;
    resultadobroa = B * 1.5 ;
    printf("Valor arrecadado com as broas e igual a %.2f \n", resultadobroa ) ;
    conta = (resultadopao + resultadobroa) / 10 ;
    printf ("Você deve guardar %.2lf na sua conta" , conta) ;

    return 0;
}
