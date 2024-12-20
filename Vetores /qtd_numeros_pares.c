#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define tam 7

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[tam];
    int cont;

    for(int i=0; i < tam; i++)
    {

    printf("Digite o os valores do vetor : ");
    scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0)
        {
            cont++;
        }
    }

    printf("\nNumeros Pares :\n" );
    for(int i=0; i < tam; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf(" %d", vet[i]);
        }
    }
    printf("\n");

    printf("\n A quantidade números pares é = %d \n", cont);

    return 0;
}
