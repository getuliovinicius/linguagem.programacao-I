#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que calcule o resto da divisão de um número inteiro sem sinal maior que 1000 por 7 e exiba o resultado
 */

int main()
{
    unsigned int x, y, resto;

    x = 1678;
    y = 7;
    resto = x % y;

    printf("O resto da divisão de %i por %i é igual a %i", x, y, resto);
    return 0;
}
