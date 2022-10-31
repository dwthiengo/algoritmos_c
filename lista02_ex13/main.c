#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int v100 , v50 , v20 , v10 , v5 , v1;

    printf("Insira um valor em reais: ");
    scanf("%f" , &valor);


	v100 = valor / 100;
	valor = valor - v100 * 100;
    v50 = valor / 50;
	valor = valor - v50 * 50;
    v20 = valor / 20;
	valor = valor - v20 * 20;
    v10 = valor / 10;
	valor = valor - v10 * 10;
    v5 = valor / 5;
	valor = valor - v5 * 5;
    v1 = valor;

	printf("\nO numero de notas de 100 e :  %d", (v100));
	printf("\nO numero de notas de 50 e :  %d", (v50));
	printf("\nO numero de notas de 20 e :  %d", (v20));
	printf("\nO numero de notas de 10 e :  %d", (v10));
	printf("\nO numero de notas de 5 e :  %d", (v5));
	printf("\nO numero de notas de 1 e :  %d", (v1));

    return 0;
}

