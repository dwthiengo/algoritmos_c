#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos;
    int diasTrabalhados;
    int meses ;
    int dias ;
    printf ("Inisira quantos dias estamos trabalhando sem acidentes: ");
    scanf ("%d" , &diasTrabalhados);
    anos = diasTrabalhados/360;
    meses = diasTrabalhados/30 - (anos*12);
    dias = diasTrabalhados%30;
    printf ("Estamos a %d anos, %d meses e %d dias sem acidentes!" , anos , meses , dias);
}
