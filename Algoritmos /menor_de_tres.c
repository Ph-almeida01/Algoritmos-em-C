//Lê três números inteiros e identifica qual deles é o menor.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num,num2,num3,menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &num);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if ((num < num2) && ( num < num3))
    {

        menor = num;
    }
    else if((num2 < num) && ( num2 < num3))
    {

        menor = num2;
    }
    else
    {
        menor = num3;
    }

    printf(" O menor valor é o %d ", menor);

    return 0;
}

