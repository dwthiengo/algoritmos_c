#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1 , nota2 , media;

    printf("Insira a primeira nota: ");
    scanf("%f" , &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f" , &nota2);
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    printf("A media do aluno e igual a %.2f" , media);

    return 0;
}
