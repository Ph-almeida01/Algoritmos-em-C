//Lê dois números inteiros e exibe o maior deles.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num,num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num);
    printf("Digite o segundo número: ");
    scanf("%d", &num);

    if (num > num2) {

        printf(" O  maior número é %d", num);
    }
    else
    {

        printf(" O maior número é %d ", num2);
    }


    return 0;
}
