//O programa lê um número e informa se ele é positivo, negativo ou igual a zero.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um valor : ");
    scanf("%d", &num);

    if (num > 0)
    {
  printf(" O valor %d é positivo ", num);

    }
    else if(num < 0)
    {

       printf(" O valor %d é negativo", num);
    }
    else
    {
      printf(" O valor %d é nulo ", num);
    }

    return 0;
}

