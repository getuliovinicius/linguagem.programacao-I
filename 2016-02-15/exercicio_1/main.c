#include <stdio.h>
#include <stdlib.h>

/*
 *   Multiplicação de variavel real por uma variavel inteira e resultado com casas decimais
 */

int main()
{
    int x;
    float y;
    float resultado;

    x = 5;
    y = 4.56;
    resultado =  x * y;

    printf("A multiplicação de %i por %.2f é %.2f", x, y, resultado);
    return 0;
}
