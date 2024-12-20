// Este código em C permite ao usuário preencher uma matriz e, em seguida, exibe os valores inseridos e conta quantos elementos são iguais a 10.

#include <stdio.h>
#define tam 3

int main()
{
    int mat[tam][tam];
    int cont = 0;
    int i, j;

    printf("\nPreenchimento da Matriz:\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz Digitada:\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (mat[i][j] == 10)
            {
                cont++;
            }
        }
    }

    printf("\nA matriz possui %d elementos iguais a 10.\n", cont);

    return 0;
}
