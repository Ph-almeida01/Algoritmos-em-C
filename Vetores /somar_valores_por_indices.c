// O programa realiza a soma dos valores armazenados nos índices escolhidos, verificando se os índices fornecidos estão dentro do intervalo válido.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define tam 12 

int main() {

    setlocale(LC_ALL, "Portuguese");

    int vet[tam];
    int i, x, y, soma = 0;

    printf("\nPreenchendo o vetor:\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\nLeia o índice X: ");
    scanf("%d", &x);
    printf("\nLeia o índice Y: ");
    scanf("%d", &y);

    if (x < tam && y < tam) {
        soma = vet[x] + vet[y];
    }

    printf("A soma de %d + %d é = %d\n", vet[x], vet[y], soma);

    return 0;
}
