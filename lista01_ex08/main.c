#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1 ;
    float nota2;
    float nota3;
    double media;

    printf ("Digite a nota da primeira prova: ");
    scanf ("%f" , &nota1);
    printf ("Digite a nota da segunda prova: ");
    scanf ("%f" , &nota2);
    printf ("Digite a nota da terceira prova: ");
    scanf ("%f" , &nota3);
    printf ("A media das tres provas e %.2f" , media = (1*nota1 + 2*nota2 + 3*nota3)/ 6);

}
