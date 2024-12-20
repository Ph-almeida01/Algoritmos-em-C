#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{

    int i,j;
    int matIdentidade[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i == j)
            {
                matIdentidade[i][j] = 1;
            }
            else
            {
                matIdentidade[i][j] = 0;
            }
        }
    }

    printf("\nMatriz Identidade:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", matIdentidade[i][j]);
        }
        printf("\n");
    }


    return 0;
}
