// Ler um conjunto de valores inteiros e positivos, calcular e escrever a soma e o produto desses valores.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, num;
    int produto = 1, soma = 0, cont = 0;

    printf("Quantos números você deseja digitar ?  : ");
    scanf("%d", &num);

    while(num != cont)
    {

        printf("Digite um valor positivo: ");
        scanf("%d", &x);

        if( x < 0 )
        {
            printf("Tente Novamente ! \n");

        } else {

            soma += x;
            produto *= x;
            cont++;
        }

    }

    printf("A soma dos valores é = %d\n", soma);
    printf("O produto dos valores é = %d\n", produto);

    return 0;
}
