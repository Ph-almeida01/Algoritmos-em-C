// Este código em C utiliza um vetor para armazenar os 10 primeiros números ímpares.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define tam 10 

int main() {

    setlocale(LC_ALL, "Portuguese");
    int vet[tam];
    int i;
    int impar = 1;

    for (i = 0; i < tam; i++) {
        vet[i] = impar;
        impar += 2; 
    }

    printf("\n10 primeiros números ímpares:\n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
