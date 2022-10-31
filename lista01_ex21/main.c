#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int quantidadeLatas;
    int quantidadeGarrafaPequena;
    int quantidadeGarrafaGrande;
    float quantidadeLiquido;

    printf("Insira quantas latas foram compradas:\n");
    scanf("%d" , &quantidadeLatas);
    printf("Insira quantas garrafas de 600mL foram compradas:\n");
    scanf("%d" , &quantidadeGarrafaPequena);
    printf("Insira quantas garrafas de 2L compradas:\n");
    scanf("%d" , &quantidadeGarrafaGrande);
    quantidadeLiquido = (2 * quantidadeGarrafaGrande) + (quantidadeGarrafaPequena * 0.6) + (quantidadeLatas * 0.35);
    printf ("Voce comprou %.2f de liquido" , quantidadeLiquido);

    return 0;
}
