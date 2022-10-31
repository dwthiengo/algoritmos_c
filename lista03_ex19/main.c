#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor[15];
    int i, maiorAltura , menorAltura;

    for (int i=0; i<15; i++)
    {
        printf("Insira a altura em centimetros: ");
        scanf("%i", &Vetor[i]);

    }

    maiorAltura  = Vetor[0];
    for(i = 0; i<15; i++)
    {
        if(maiorAltura < Vetor[i])
        {
            maiorAltura = Vetor[i];
        }
    }

    menorAltura = Vetor[0];
    for(i = 0; i<15; i++)
    {
        if(menorAltura > Vetor[i]){
            menorAltura;
        }

    }
        printf("A maior altura e igual a %d centimetros.\n", maiorAltura);
        printf("A menor altura e igual a %d centimetros.\n", menorAltura);

}
