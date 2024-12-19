// Este programa em C calcula e exibe os números da Sequência de Fibonacci até um limite definido pelo usuário.
// A Sequência de Fibonacci é uma série de números onde cada número é a soma dos dois anteriores, começando geralmente por 0 e 1. 

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int ant1 = 1, ant2 = 0, atual, num;

    printf("Digite a ordem do fibonacci ? : ");
    scanf("%d", &num);

    printf("%d ", ant2);
    printf("%d ", ant1);

    for(int i = 2 ; i <= num; i++ )
    {
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant1 = ant2;
        ant2 = atual;


    }

    return 0;
}
