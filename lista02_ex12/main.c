#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X , Y , Z;

    printf("Insira o valor X: ");
    scanf("%f" , &X);
    printf("Insira o valor Y: ");
    scanf("%f" , &Y);
    printf("Insira o valor Z: ");
    scanf("%f" , &Z);

    if (X > Y + Z || Y > X + Z || Z > Y + X )
        printf ("Tais medidas não formam um triângulo. \n");
    else {
        if ( X == Z && X == Y)
            printf("O triangulo e equilatero.");
        else if ((X == Y && X != Z) || (Y==Z && Y != X) || (X == Z && X != Z))
                 printf("O triangulo e isosceles");
        else if (X!= Y && X != Z)
            printf("O triangulo e escaleno.");

    }


    return 0;
}
