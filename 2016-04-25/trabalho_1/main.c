#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 15

// prototipo da funcao
int funcao(unsigned int num1, unsigned int num2);

// funcao principal
int main() {
    //declaracao de variaveis
    unsigned int vet1[TAMANHO] = {1, 4, 7, 11, 15, 18, 21, 24, 27, 30, 3, 6, 12, 19, 14};
    unsigned int vet2[TAMANHO], i;

    // preenchimento do segundo vetor
    for (i = 0; i < 15; i++) {
        // testa se foi inserido um valor entre 0 e 30
        do {
            printf("Informe um numero inteiro positivo entre 0 e 30:\n");
            scanf("%u", &vet2[i]);
            getchar();
        } while (vet2[i] > 30);
    }

    // imprime o resultado do teste
    for (i = 0; i < 15; i++) {
        printf("funcao(%u e %u) = %d \n", vet1 [i], vet2[i], funcao(vet1[i], vet2[i]));
    }

    // retorna 0 no final da execucao
    return 0;
}

// funcao que compara dois inteiros
int funcao(unsigned int num1, unsigned int num2) {

    if(num1 > num2) {
        return 1;
    } else if (num1 == num2) {
        return 0;
    } else {
        return -1;
    }

}
