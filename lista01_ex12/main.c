#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioInicial ;

    printf ("Insire o seu salario: ");
    scanf ("%lf", &salarioInicial);

    double salarioComAumento = salarioInicial + (salarioInicial * 15/100) ;
    double salarioComDesconto = salarioComAumento - (salarioComAumento * 8/100) ;

    printf ("Seu salario inicial: %.2lf reais\n" , salarioInicial);
    printf ("Seu salario com aumento: %.2lf reais\n" , salarioComAumento);
    printf ("Seu salario com desconto: %.2lf reais\n" , salarioComDesconto);
}
