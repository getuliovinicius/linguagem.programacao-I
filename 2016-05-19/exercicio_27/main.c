#include <stdio.h>
#include <stdlib.h>

/* Exercício 27
 * Declare duas variáveis int (i1 e i2), duas double (d1 e d2), duas char (c1 e c2) e duas short int (s1 e s2)
 * Dê valores à primeira variável de cada tipo (i1,d1, c1 e s1)
 * Declare um ponteiro compatível com cada tipo de dado das variáveis.
 * Faça com que os ponteiros recebam o endereço das primeiras variáveis de cada tipo (i1, d1, c1 e s1)
 * Usando derreferência, atribua às segundas variáveis de cada tipo (i2, d2, c2 e s2) o valor apontado pelos ponteiros dos respectivos tipos
 * Exiba na tela o valor das segundas variáveis (i2, d2, c2 e s2), provando que elas têm o mesmo valor das primeiras variáveis (i1, d1, c1 e s1)
 */


int main()

{
    // declaracao de variaveis
    int i1, i2;
    double d1, d2;
    char c1, c2;
    short int s1, s2;

    // inicializaçao de variveis
    i1 = 44;
    d1 = 3.14;
    c1 = 'F';
    s1 = 500;

    // declaracao dos ponteiros
    int *p_int;
    double *p_dbl;
    char *p_chr;
    short int *p_sht;

    // inicializacao dos ponteiros
    p_int = &i1;
    p_dbl = &d1;
    p_chr = &c1;
    p_sht = &s1;

    // atribuir as segundas variaveis os valores dos ponteiros
    i2 = *p_int;
    d2 = *p_dbl;
    c2 = *p_chr;
    s2 = *p_sht;

    printf("[i1] - %i | [d1] - %lf | [c1] - %c | [s1] - %hd", i1, d1, c1, s1);
    printf("\n[i2] - %i | [d2] - %lf | [c2] - %c | [s2] - %hd", i2, d2, c2, s2);

    return 0;
}
