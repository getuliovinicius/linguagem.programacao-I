#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * A função de biblioteca rand() serve para gerar um número aleatório entre 0 e o maior inteiro positivo suportado pelo tipo int. Se quisermos gerar um número aleatório entre 0 e 10, podemos utilizar a seguinte instrução
int aleatorio = rand() % 10 + 1;
 * Escreva um programa que gere um número aleatório entre 0 e 20. Em seguida, peça ao usuário para “adivinhar” o número aleatório. A pergunta ao usuário deve ser repetida até que ele acerte o número aleatório. Utilize o laço do...while
 */

int main()
{
    // define configurações regionais
    setlocale(LC_ALL, "");

    // declara as váriaveis
    int aleatorio, adiv;

    // gera um número aleatório
    srand((unsigned)time(NULL));
    aleatorio = rand() % 20+1;

    // laco para repetição da pergunta
    do {
        printf("Qual e o número secreto?");
        scanf("%d", &adiv);
        getchar();
    } while (adiv != aleatorio);

    // saida quando o usuário acertar o numero
    printf("Parabéns, você acertou!\n");
    return 0;
}
