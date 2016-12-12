#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que carregue 20 (vinte) inteiros em um vetor, utilizando carga inicial, e os exiba depois na ordem inversa em que foram colocados no vetor. Utilize um loop for.
 */

int main() {

    // define as configuracoes regionais
    setlocale(LC_ALL, "");

    // declara variaveis de entrada
    int i, numeros[20];

    // loop para entrada de dados no vetor
    for (i = 0; i < 19; i++) {
        srand((unsigned) time(NULL));
        numeros[i] = rand() % 20+1;
    }

    // loop para imprimir os dados invertendo a ordem de entrada
    for (i = 19; i >= 0; i--) {
        printf("%dº nro: %d \n", i + 1, numeros[i]);
    }

    // retorna o programa sem erro
    return 0;
}
