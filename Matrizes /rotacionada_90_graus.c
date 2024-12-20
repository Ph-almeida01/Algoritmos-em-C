// Matriz 4x4 rotacionada em 90 graus

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main() {
    int mat[TAM][TAM];
     int mat90[TAM][TAM];

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
            mat90[j][TAM - 1 - i] = mat[i][j];
        }
    }
    printf("\nMatriz Rotacionada 90 Graus:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", mat90[i][j]);
        }
        printf("\n");
    }

       return 0;
}
