#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Escreva um programa que, tendo obtida a idade do usuário, informe a ele sua situação eleitoral:
 Menor de 16 anos: não pode votar
 Entre 16 e 18 anos: voto facultativo
 Mais de 18 anos e menos de 70 anos: voto obrigatório
 Mais de 70 anos (inclusive): voto facultativo
 */

int main()
{
    // define as variaveis de localização
    setlocale(LC_ALL, "");

    // declara as variaveis
    unsigned int idade;

    // carrega as variaveis
    printf("Informe sua idade: ");
    scanf("%u", &idade);

    // avalia a situação eleitoral
    if (idade < 16) {
        printf("Você nao pode votar.");
    } else if ((idade >= 18) && (idade <= 70)) {
        printf("Você é obrigado a votar.");
    } else {
        printf("Você pode votar, mas não é obrigado");
    }

    return 0;
}
