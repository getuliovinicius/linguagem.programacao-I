#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Exemplo de uso da função "scanf"
 * inteiro
 */

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, soma;

    printf("Digite um número inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro número inteiro: ");
    scanf("%i", &num2);

    soma = num1 + num2;

    printf("A soma de %i e %i é %i", num1, num2, soma);
    return 0;
}
