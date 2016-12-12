#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Numa empresa de metereologia, as temperaturas de uma cidade são medidas às 6h da manhã, ao meio-dia, às 18h e à meia-noite.
 * Escreva um programa que armazene o nome da cidade, sua UF e as quatro temperaturas medidas.
 * Implemente funções para calcular a temperatura mínima, a temperatura máxima e a temperatura média.
 */

struct temperatura_dia {
    char cidade[40];
    char uf[3];
    float temp_0, temp_6, temp_12, temp_18;
};

float temp_minima (struct temperatura_dia temperatura);
float temp_maxima (struct temperatura_dia temperatura);
float temp_media (struct temperatura_dia temperatura);

int main() {

    setlocale(LC_ALL, "");

    struct temperatura_dia temperatura;

    printf("\nInforme a Cidade:\t");
    fgets(temperatura.cidade, 40 - 2, stdin);
    printf("\nInforme a UF:\t");
    scanf("%s", temperatura.uf);
    printf("\nTemperatura às 0h00:\t");
    scanf("%f", &temperatura.temp_0);
    printf("\nTemperatura às 6h00:\t");
    scanf("%f", &temperatura.temp_6);
    printf("\nTemperatura às 12h00:\t");
    scanf("%f", &temperatura.temp_12);
    printf("\nTemperatura às 18h00:\t");
    scanf("%f", &temperatura.temp_18);

    printf("%f - %f - %f - %f", temperatura.temp_0, temperatura.temp_6, temperatura.temp_12, temperatura.temp_18);
    return 0;
}
