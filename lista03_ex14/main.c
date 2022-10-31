#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     int tamanho = 3 , valor = 1;
     char string[tamanho] , string2[] = ("sim");

     while (valor != 0){

     printf("Ola, tudo bem? ");
     gets(string);

     valor = strcmp (string , string2);
     printf("\n");
    }


}


