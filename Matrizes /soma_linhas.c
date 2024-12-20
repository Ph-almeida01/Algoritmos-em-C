// Este programa em C recebe uma matriz 2x2 como entrada do usuário e calcula a soma dos elementos de cada linha, armazenando os resultados em um vetor

#include <stdio.h>
#define tam 2

int main()
{
    int mat[tam][tam];
    int vet[tam];
    int i, j;

    for (i = 0; i < tam; i++)
    {
        printf("\nDigite os elementos da %da linha:\n", i + 1);
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < tam; i++)
    {
        vet[i] = 0;
        for (j = 0; j < tam; j++)
        {
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("\nVetor Gerado:\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
}
