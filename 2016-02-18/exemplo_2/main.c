#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Exemplo de uso da função "scanf"
 * real
 */

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2, soma;

    printf("Digite um número real: ");
    scanf("%f", &num1);
    printf("Digite outro número real: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("A soma de %f e %f é %f", num1, num2, soma);
    return 0;
}
