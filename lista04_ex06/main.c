#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor[10] , i , maior , menor , posicaoMaior, posicaoMenor;

    for (int i = 0; i<10; i++) {
        printf("Insira a idade %d do vetor: ", (i+1));
        scanf("%d", &Vetor[i]);
    }


     maior = Vetor[0];
    for(i = 0; i<10; i++)
    {
        if(maior < Vetor[i])
        {
            maior = Vetor[i];
            posicaoMaior = i;
        }
}

    menor = Vetor[0];
    for(i = 0; i<10; i++)
    {
        if(menor > Vetor[i])
        {
            menor = Vetor[i];
            posicaoMenor = i;
        }
}

    printf("A maior idade e igual a %d anos que esta na posicao %d.\n" , maior , posicaoMaior);
    printf("A menor idade e igual a %d anos que esta na posicao %d." , menor , posicaoMenor);

}
