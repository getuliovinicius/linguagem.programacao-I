#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que leia um número inteiro e informe ao usuário se esse número é par ou ímpar.
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    unsigned int num1, resto;

    // carrega as variaveis
    printf("Digite um número inteiro: ");
    scanf("%i", &num1);

    // testa se e diferente de zero e processa o resultado
    if(num1 == 0) {

        printf("ERRO! não se sabe se zero é par ou impar.");

        return 1; // termina com erro o programa

    } else {

        resto = num1 % 2;

        if (resto == 0) {
            printf("O nro %i digitado é par", num1);
        } else {
            printf("A nro %i digitado é impar", num1);
        }

        return 0;

    }
}
