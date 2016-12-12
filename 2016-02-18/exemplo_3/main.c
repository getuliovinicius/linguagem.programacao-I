#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Exemplo de uso da função "scanf"
 * real
 */

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2, divisao;

    printf("Digite um número real: ");
    scanf("%f", &num1);
    printf("Digite outro número real: ");
    scanf("%f", &num2);

    if(num2 == 0) {
        printf("ERRO! Não é possível dividir por zero.");
        return 0;
    } else {
        divisao = num1 + num2;
        printf("A divisao de %f e %f é %f", num1, num2, divisao);
        return 0;
    }
}
