//O fatorial de um número é o produto de todos os números inteiros positivos menores ou iguais a ele. 

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, fatorial = 1;

    printf("Digite um valor : ");
    scanf("%d", &num);

for(int i=1; i <=  num; i++){

    fatorial *= i;

    printf("%d ", fatorial);
}

    return 0;
}
