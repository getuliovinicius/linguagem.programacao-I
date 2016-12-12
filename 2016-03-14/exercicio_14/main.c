#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que solicite ao usuário um número inteiro e calcule a soma de todos os números positivos menores que ele. Por exemplo, se o usuário informar o número 7, o programa deve calcular o resultado de 1 + 2 + 3 + 4 + 5 + 6. Utilize o laço for
 */

int main()
{
    // define configurações regionais
    setlocale(LC_ALL, "");

    // define as variaveis
    unsigned int num, i, soma = 0;

    // solicita a entrada de um numero inteiro positivo
    printf("informe um numero inteiro positivo: ");
    scanf("%u", &num);
    getchar();

    // laco para somar os numeros sequenciais
    for (i=1; i < num; i++){
        soma += i;
    }

    // exibe a soma
    printf("A soma de 1 até %u é %u\n", num - 1, soma);
    return 0;
}
