// O programa lê um número inteiro digitado pelo usuário e exibe seu antecessor e sucessor. Ideal para praticar operações matemáticas simples e entrada/saída de dados em C. 

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, antecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O antecessor do número %d é o número %d e o sucessor é o número %d.\n", num, antecessor, sucessor);

    return 0;
}
