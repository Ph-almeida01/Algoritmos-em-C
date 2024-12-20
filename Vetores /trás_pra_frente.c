// Reescreva um vetor de trás pra frente

#include <stdio.h>
#include <locale.h>
#define tam 7

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i, cont;
    int vet[tam];
    
    for(i=0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("\nVetor Original\n");
    for(i=0; i < tam; i++)
    {
        printf("%d ", vet[i]);

    }

    cont = 0;
    printf("\nVetor de Trás pra Frente\n");
    for(i=tam-1; i >= 0; i--)
    {
        printf("%d ", vet[i]);
        if( vet[i] == 7)
        {
            cont++;
        }
    }

    return 0;
}
