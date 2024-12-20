// Matriz rotacionada em 270 graus

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main() {
    int mat[TAM][TAM];
     int mat270[TAM][TAM];

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
            mat270[TAM - 1 - j][i] = mat[i][j];
        }
    }
    printf("\nMatriz Rotacionada 270 Graus:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", mat270[i][j]);
        }
        printf("\n");
    }

       return 0;
}
