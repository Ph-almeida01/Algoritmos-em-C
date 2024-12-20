// Destaca o maior valor do vetor 

#include <stdio.h>
#define tam 7

int main()
{

    int i,maiorVet;
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


    maiorVet = vet[0];
    for(i=0; i < tam; i++)
    {
        if(maiorVet < vet[i])
        {
            maiorVet = vet[i];
        }
    }

    printf("\nO menor elemento do vetor eh = %d", maiorVet);


    return 0;
}
