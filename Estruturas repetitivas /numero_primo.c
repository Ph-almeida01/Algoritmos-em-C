//Um número primo é um número natural maior que 1 que só pode ser dividido por 1 e por ele mesmo, ou seja, possui exatamente dois divisores.
//Exemplos de Números Primos:
//2, 3, 5, 7, 11, 13, 17, 19, 23, ...

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, cont = 0;

    printf("Digite um valor : ");
    scanf("%d", &num);


    for(int i = 1; i <= num; i++)
    {

        if( num % i == 0)
        {
            cont++;
        }
    }

    if( cont == 2)
    {

        printf(" O número %d é primo", num);

    }
    else
    {

        printf(" O número %d  não é primo", num);

    }

    return 0;
}
