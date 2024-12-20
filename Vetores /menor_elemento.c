// Destaca o menor elemento de um vetor

#include <stdio.h>
#define tam 7

int main()
{

    int i,menorVet;
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


    menorVet = vet[0];
    for(i=0; i < tam; i++)
    {
        if(menorVet > vet[i])
        {
            menorVet = vet[i];
        }
    }

    printf("\nO menor elemento do vetor eh = %d", menorVet);


    return 0;
}
