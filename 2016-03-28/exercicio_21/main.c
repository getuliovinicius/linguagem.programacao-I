#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "");

  char caracs[12], maior, menor;
  int x;


  for(x = 0; x < 12; x++) {
		printf("Informe o %dº caractere: ", x + 1);
		scanf("%c", &caracs[x]);
		getchar();
  }

  maior = caracs[0];
  menor = caracs[0];

	for(x = 1; x < 12; x++) {
		if(caracs[x] < menor) {
			menor = caracs[x];
		}
		if(caracs[x] > maior) {
			maior = caracs[x];
		}
	}

  printf("O maior caractere é '%c' e o menor é '%c'.", maior, menor);

	return 0;
}
