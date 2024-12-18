//Lê três números inteiros e calcula a soma dos dois maiores valores.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num,num2,num3;
    int soma = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num && num2 > num3)
    {

        soma = num + num2;

    }
    else if( num && num3 > num2)
    {

        soma = num + num3;
    }
    if ( num2 && num3 > num)
    {

        soma = num2 + num3;

    }

    printf(" A soma dos 2 maiores valores é = %d ", soma);

    return 0;
}
