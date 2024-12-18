//O programa lê um número inteiro e verifica se ele é par ou ímpar, exibindo o resultado.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {

        printf(" O número %d é par", num);
    }
    else
    {

        printf(" O número %d é impar ", num);
    }


    return 0;
}
