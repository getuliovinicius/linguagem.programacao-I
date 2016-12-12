#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que leia um ano e informe se esse ano é bissexto ou não. Um ano é bissexto quando é múltiplo de 4. Se for múltiplo de 100, deve ser também múltiplo de 400.
Alguns anos para testar:
1969: não é bissexto
2000: é bissexto
1900: não é bissexto
2012 é bissexto
1994: não é bissexto
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    unsigned int ano;

    // carrega as variaveis
    printf("Informe o ano que deseja testar: ");
    scanf("%u", &ano);

    // testa se o ano e bissexto
    if ((ano % 4 == 0) && !(ano % 100 == 0)) {
        printf("É um ano bissexto");
    } else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))  {
        printf("É um ano bissexto");
    } else {
        printf("Não é um ano bissexto");
    }

    return 0;

}
