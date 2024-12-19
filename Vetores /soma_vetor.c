#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define tam 7

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[tam];
    float media, cont, soma = 0;

    for(int i=0; i < tam; i++)
    {

        printf("Digite os números do vetor : ");
        scanf(" %d", &vet[i]);
        soma = soma + vet[i];

    }

    printf("\nValores = ");
    for(int i=0; i < tam; i++)
    {
        printf(" %d", vet[i]);
    }
    printf("\n");

     media = soma/tam;

    printf("\n A soma dos valores do vetor é = %.2f\n", soma);
    printf("\n A media dos valores do vetor é = %.2f\n", media);

    return 0;
}
