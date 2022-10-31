#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numAlunos;
    float nota1 , nota2 , media;

    printf("A R Q U I V O  D E  N O T A S");

    printf("\n\nInsira o numero de alunos na turma: ");
    scanf("%d" , &numAlunos);

    for (int i=0; i<numAlunos; i++)
    {
        printf("\nInsira a primeira nota do aluno %d: " , i+1);
        scanf("%f", &nota1);
        printf("\nInsira a segunda nota do aluno %d: " , i+1);
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;

        if (media >=6){
            printf("\nO aluno %d esta aprovado!\n" , i+1);
        }else
        printf("\nO aluno %d esta reprovado!\n" , i+1);

    }

}
