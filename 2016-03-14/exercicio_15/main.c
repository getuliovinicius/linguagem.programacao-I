#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
 * Escreva um programa que imprima na tela meia árvore de natal com asteriscos. O número de ramos deverá ser informado pelo usuário. Considere a possibilidade de utilizar um for dentro de outro for (fors aninhados)
 * Exemplos com 3, 4 e 5 ramos:
*    *     *
**   **    **
***  ***   ***
     ****  ****
           *****
 */
int main()
{
    // define configurações regionais
    setlocale(LC_ALL, "");

    // declaração de variaveis
    unsigned int ramos, i, j;

    // pergunta a quantidade de ramos
    printf("Quantos ramos?");
    scanf("%u", &ramos);

    // laco para montar a arvore
    for (i = 0; i < ramos; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
