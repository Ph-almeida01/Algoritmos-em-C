//Lê dois números e exibe-os em ordem decrescente.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x,y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (x > y)
    {

        printf(" %d >> %d ", x,y);

    }
    else
    {
        printf(" %d >> %d ",y,x);
    }

    return 0;
}
