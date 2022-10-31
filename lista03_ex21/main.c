#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolhaMesa , mesaNaoFuma = 25, mesaFuma = 25;

    printf("--------------------------------------------------------");
    printf("\n                R E S T A U R A N T E           \n");
    printf("--------------------------------------------------------");
    printf("\nMesas disponiveis. \n FUMANTES: 25 \n NAO FUMANTES: 25");

    for (int i=0; i<50; i++)

    {
        printf("\n\n 1 - FUMANTE \n 2 - NAO FUMANTE \n\nInsira a sua escolha: ");
        scanf("%d", &escolhaMesa);

        if (escolhaMesa == 1){
            mesaFuma --;
        }else if(escolhaMesa == 2){
            mesaNaoFuma --;
            }else if(escolhaMesa != 1 || escolhaMesa != 2){
            printf("Valor invalido.\n");
        }
        if (mesaNaoFuma < 0 && mesaFuma < 0){
            printf("Mesas esgotadas\n");
            break;
        }
        printf("\nMesas disponiveis. \n FUMANTES: %d \n NAO FUMANTES: %d" , mesaFuma , mesaNaoFuma );

    }

}
