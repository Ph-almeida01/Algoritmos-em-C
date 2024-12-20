// Matriz transposta é a matriz que linha vira coluna e a coluna vira linha.

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main() {
    int mat[TAM][TAM];
     int matTransposta[TAM][TAM];

    printf("Preencha a matriz (%dx%d):\n", TAM, TAM);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz Original Preenchida:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matTransposta[j][i] = mat[i][j];
        }
    }
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matTransposta[i][j]);
        }
        printf("\n");
    }

       return 0;
}
