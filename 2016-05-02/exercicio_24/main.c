#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TAMANHO 10

void ao_quadrado(unsigned int v[TAMANHO]) {
	unsigned int i;

	for(i = 0; i < TAMANHO; i++) {
		v[i] = pow(v[i], 2);
	}

}

int main()
{

  setlocale(LC_ALL, "");

  unsigned int i;
  unsigned int vet[TAMANHO];

	for(i = 0; i < TAMANHO; i++) {
		printf("Informe o %uº inteiro sem sinal: ", i + 1);
		scanf("%u", &vet[i]);
	}

	ao_quadrado(vet);

	printf("Seus números elevados ao quadrado: ");

	for(i = 0; i < TAMANHO; i++) {
		printf("%u ", vet[i]);
	}

  return 0;

}
