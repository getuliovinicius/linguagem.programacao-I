#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(float *a, float *b) {
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void ordenar(float *x, float *y, float *z) {

	if(*z < *x) {
		// Para chamar troca(), não é mais preciso usar &,
		// pois x, y e z JÁ SÃO endereços (ponteiros)
		troca(x, z);
	}

	if(*y < *x) {
		troca(x, y);
	}

	if(*z < *y) {
		troca(y, z);
	}

}

int main()
{

  setlocale(LC_ALL, "");

	float n1, n2, n3;

	printf("Informe o primeiro número real: ");
	scanf("%f", &n1);

	printf("Informe o segundo número real: ");
	scanf("%f", &n2);

	printf("Informe o terceiro número real: ");
	scanf("%f", &n3);

	ordenar(&n1, &n2, &n3);

	printf("Os três números, ordenados: %f %f %f", n1, n2, n3);

  return 0;

}
