//Um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número.
//Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("Digite um valor : ");
    scanf("%d", &num);


    for(int i = 1; i < num; i++)
    {

        if( num % i == 0)
        {
            soma += i;
        }
    }

    if( soma == num)
    {

        printf(" O número %d é perfeito", num);

    }
    else
    {

        printf(" O número %d  não é perfeito", num);

    }

    return 0;
}
