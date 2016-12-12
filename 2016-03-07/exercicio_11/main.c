#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que exiba apenas os números pares no intervalo entre 0 e 100. Utilize a instrução continue em sua implementação
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    unsigned int i;

    // inicia a variavel de condição de parada do loop
    i = 0;

    // loop para impressao dos numeros pares
    while (i <= 100) {

        // incrementa a variavel i
        ++i;

        // verifica se não é par
        if ( i % 2 != 0) {
            continue; // pula para a proxima iteração
        }

        // imprime quando o numero "i" for par
        printf("# - %i é par.\n", i);
    }

    // retorna sem erros
    return 0;
}
