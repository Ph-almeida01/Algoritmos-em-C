#include <stdlib.h>
#include <stdio.h>

int main ()
{

    int num,x;
    int soma = 0;
    int cont = 0;

    printf(" Deseja digitar quantos numeros ? : ");
    scanf(" %d", &x);

    while(cont != x)
    {

        printf("Digite um valor :");
        scanf("%d", &num);
        soma += num;
        cont++;

    }


printf("A soma dos valores eh = %d", soma);


}
