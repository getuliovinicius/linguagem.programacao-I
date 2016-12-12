#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que obtenha do usuário um número inteiro de horas e um caractere (m ou s), para exibir o número de minutos ou de segundos contido no número de horas informado. Utilize a estrutura if(<condição>)...else if(<condição>)...else, lembrando que o usuário pode informar a opção relativa os minutos e segundos tanto em maiúsculas quanto em minúsculas.
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    unsigned int hora, resultado;
    char unidade;

    // carrega as variaveis
    printf("Digite um número inteiro de horas: ");
    scanf("%u", &hora);
    getchar(); // impede a passagem direta apos teclar enter
    printf("Você deseja saber quantos minutos [m | M] ou em segundos [s | S]? ");
    scanf("%c", &unidade);

    // testa as opções de acordo com a escolha [m|s] e processa o resultado
    if (unidade == 'S' || unidade == 's') {

        resultado = hora * 60 * 60;

        printf("Certo, %u horas corresponde a %u segundos", hora, resultado);

    } else if (unidade == 'M' || unidade == 'm') {

        resultado = hora * 60;

        printf("Certo, %u horas corresponde a %u minutos", hora, resultado);

    } else {

        printf("A opção de resultado escolhida não é válida! ");

        return 1; // termina com erro o programa

    }

    return 0;
}
