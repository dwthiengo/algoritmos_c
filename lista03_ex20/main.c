#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numAnimais , animal , gato = 0, cachorro = 0;

    printf("P E T  S H O P");

    printf("\n\nInsira o numero de animais: ");
    scanf("%d" , &numAnimais);

    for (int i=0; i<numAnimais; i++)
    {
        printf("\n 1 - Gato \n 2 - Cachorro \nInsira a especie do animal: ");
        scanf("%d", &animal);

        if (animal == 1){
            gato++;
        }else if(animal == 2){
            cachorro++;
            }else if(animal != 1 || animal != 2){
            printf("Valor invalido.\n");
        }
        printf("Gato: %d \nCachorro: %d" , gato , cachorro);

    }

}
