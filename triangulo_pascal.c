// Este código implementa exibição do Triângulo de Pascal utilizando c.

#include <stdlib.h>
#include <stdio.h>
#define tam 7

int main()
{
    int mat[tam][tam];
    int i, j;

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mat[i][j] = 0;
        }
    }

    for (i = 0; i < tam; i++) {
        mat[i][0] = 1; 
        for (j = 1; j <= i; j++) {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
    }

    for (i = 0; i < tam; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
