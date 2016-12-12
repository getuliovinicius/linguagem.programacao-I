#include <stdio.h>
#include <stdlib.h>

/* Declare três variáveis de três tipos diferentes
 * O usuário deve informar valores para cada uma das três variáveis.
 * Em seguida, exiba os endereços das três variáveis, bem como os respectivos valores.
 * Repita o processo anterior outras duas vezes.
 * O usuário pode informar diferentes valores para as variáveis de cada vez.
 * O endereço das variáveis vai mudar também?
*/

int main() {

    // declaração de tres tipos de variaveis
    int a; char b; float c;

    // declaraçao dos ponteiros
    int *p_a; char *p_b; float *p_c;

    printf("Informe uma variavel inteira: ");
    scanf("%d", &a);

    printf("Informe uma variavel do tipo caractere: ");
    scanf("%c", &b);

    printf("Informe uma variavel do tipo real: ");
    scanf("%f", &c);

    // captura dos ponteiros
    *p_a = a;
    *p_b = b;
    *p_c = c;

    return 0;
}
