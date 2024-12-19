// Um vetor que conta a quantidade de números negativos dentro dele.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define tam 7

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int vet[tam];
    int cont = 0;

    for(int i=0; i < tam; i++){

        printf("Digite os números do vetor : ");
        scanf(" %d", &vet[i]);

        if(vet[i] < 0){
            cont++;
        }

    }

    printf("Quantidade de números negativos no vetor é = %d", cont);

    return 0;
}
