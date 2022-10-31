#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dia;
    int mes;
    int diasdoano;
    int diasrestantes;

    printf ("Digite o dia: ");
    scanf ("%d" , &dia );
    printf ("Digite o mes: ");
    scanf ("%d" , &mes);
    printf ("Ja se passaram %d dias do ano. " , diasdoano = (mes - 1) * 30 + dia);
    printf ("Faltam %d dias para terminar o ano" , diasrestantes = 365 - diasdoano) ;
}
