#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que subtraia um número inteiro negativo de um número inteiro positivo e exiba o resultado
 */

 int main()
 {
    int a, b, resultado;

    a = -51;
    b = 49;
    resultado = a - b;

    printf("A subtração de %i por %i é igual a %i", a, b, resultado);
    return 0;
 }
