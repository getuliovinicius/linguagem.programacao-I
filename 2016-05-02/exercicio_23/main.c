#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{

  setlocale(LC_ALL, "");

	int x, y;

	printf("Informe um número inteiro: ");
	scanf("%d", &x);

	printf("Informe outro número inteiro: ");
	scanf("%d", &y);

	troca(&x, &y);

	printf("Os valores dos dois números foram trocados: %d %d", x, y);

  return 0;

}
