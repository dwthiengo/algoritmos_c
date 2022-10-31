#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroId;
    float nota1 , nota2 , nota3 , media;

    printf("Insira o número de identificacao: ");
    scanf("%d" , &numeroId);
    printf("Insira a primeira nota: ");
    scanf("%f" , &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f" , &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f" , &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7)
        printf("Parabens para aluno %d que foi aprovado com uma media de %.2f pontos" , numeroId , media);
    else if (media <= 7 && media >= 5)
        printf("Sentimos informar que aluno %d esta de recuperacao com uma media de %.2f pontos" , numeroId , media);
    else if(media <5)
        printf("Sentimos informar que o aluno %d foi reprovado com uma media de %.2f pontos" , numeroId , media);

    return 0;
}
