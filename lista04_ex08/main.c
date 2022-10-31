#include <stdio.h>
#include <stdlib.h>

int main()
{
    int GabaritoLOTO[5], Aposta[10], i, j, pontos=0;

    for(i = 0; i < 5; i++)
    {
        printf("Digite o elemento %d do gabarito da Loto: ", (i+1));
        scanf("%d", &GabaritoLOTO[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("Digite o elemento %d da aposta: ", (i+1));
        scanf("%d", &Aposta[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if (GabaritoLOTO[i] == Aposta[j])
            {
                pontos++;
            }
        }
    }

    printf("O apostador fez %d pontos", pontos);

    return 0;
}

