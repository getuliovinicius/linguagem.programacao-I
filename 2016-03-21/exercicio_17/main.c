#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Implemente a função wesley_safadao() que recebe o ano, o mês e o dia de aniversário de uma pessoa e calcula seu percentual de safadeza, obedecendo à seguinte fórmula:
 * safadeza = somatorio(mês) + (ano / 100) * (50 – dia)
 * Na função main(), peça ao usuário para informar seu dia, mês e ano de aniversário e diga a ele o respectivo percentual de safadeza
 */

// função que soma os meses do ano
int somatorio(int mes) {

    // declara as variaveis de controle do loop e soma
    unsigned int i, soma = 0;

    // loop responsavel por somar o numero do mes informado com seus antecessores
    for (i = mes; i > 0; i--) {
        soma += i;
    }

    // retorna o valor da soma
    return soma;
}

// função que calcula o percentual de safadeza do individuo
int wesley_safadao(int dia, int mes, int ano) {

    // declara as variaveis de calculo de safadeza
    float safadeza;

    // calcula a safadeza
    safadeza = somatorio(mes) + (ano / 100) * (50 - dia);
    return safadeza;

}

int main() {

    // define as configuracoes regionais
    setlocale(LC_ALL, "");

    // declara as variaveis de entrada de dados
    unsigned int ano, mes, dia;
    float safadeza;

    // solicita as informacoes pessoais
    printf("Informe dia do mês em que nasceu: ");
    scanf("%u", &dia);
    getchar();
    printf("Informe mês do ano em que nasceu: ");
    scanf("%u", &mes);
    getchar();
    printf("Informe ano em que nasceu: ");
    scanf("%u", &ano);
    getchar();

    // chama a safadeza do individuo
    safadeza = wesley_safadao(dia,mes,ano);

    // exibe o somatorio do numero informado com seus antecessores
    printf("Seu percentual de safadeza é %f\n", safadeza);

    // retorna o programa sem erros
    return 0;
}
