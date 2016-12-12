#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Peça ao usuário para informar um número inteiro entre 2 (inclusive) e 9 (inclusive). Caso o usuário informe um número fora dessa faixa, repita a solicitação até que a resposta seja válida. Imprima na tela a tabuada do número informado pelo usuário.
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    int num1, i, tabuada;

    // inicia a variavel de condição de parada do loop
    num1 = 0;

    // loop que testa se o usuário está entrando com valores validos
    while (num1 < 2 || num1 > 9) {

        // carrega a variavel num1 com o valor digitado pelo usuário
        printf("Entre com um numero entre/inclusive 2 e 9: ");
        scanf("%i", &num1);
        getchar(); // impede a passagem direta apos teclar enter

    }

    // inicia a variavel de incremento
    i = 0;

    // loop que imprime a tabuada do numero digitado
    while (i <= 10) {
        tabuada = num1 * i;
        printf("%i x %i = %i \n", num1, i, tabuada);
        i++;
    }

    // retorna o programa sem erro
    return 0;
}
