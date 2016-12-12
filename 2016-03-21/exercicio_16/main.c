#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva uma função chamada somatorio que receba um número inteiro e retorne a soma deste número com todos os números anteriores a ele. Por exemplo, dado o número 5, a função deve voltar o resultado de 5 + 4 + 3 + 2 + 1
 * Na função main(), peça para o usuário informar um número inteiro e imprima o valor do somatório do número dado
 */

int somatorio (int numero) {

    // declara variavel de decremento
    unsigned int i, soma = 0;

    // loop responsavel por somar o numero informado com seu antecessores
    for (i = numero; i > 0; i--) {
        soma += i;
    }

    // retorna o valor da soma
    return soma;
}

int main() {

    // define as configuracoes regionais
    setlocale(LC_ALL, "");

    // define as variaveis de entrada
    unsigned int numero, resultado;

    // solicita a entrada de um numero inteiro positivo
    printf("Informe um numero inteiro positivo: ");
    scanf("%u", &numero);
    getchar();

    // processa o resultado
    resultado = somatorio(numero);

    // exibe o somatorio do numero informado com seus antecessores
    printf("A soma de %u com seus antecessores é %u\n", numero, resultado);

    // retorna o programa sem erros
    return 0;
}
