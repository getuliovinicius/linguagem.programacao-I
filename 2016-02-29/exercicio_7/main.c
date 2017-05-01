#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa para informar se um número é ou não divisível por 6, sabendo que números divisíveis por 6 são divisíveis por 2 e por 3 ao mesmo tempo
 */
int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    int num1;

    // carrega as variaveis
    printf("Digite um número inteiro: ");
    scanf("%u", &num1);

    // testa se o numero é divisivel por 6
    if ((num1 % 2 == 0) && (num1 % 3 == 0)) {
        printf("Este numero é divisivel por 6.");
    } else {
        printf("Este numero não é divisivel por 6.");
    }

    return 0;
}
