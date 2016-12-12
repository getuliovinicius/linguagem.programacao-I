#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "");

  float nums[10], soma = 0;
  int n;

  for(n = 0; n < 10; n++) {
		printf("Informe o %dº número: ", n + 1);
		scanf("%f", &nums[n]);
		getchar();
  }

  for(n = 0; n < 10; n++) {
		soma += nums[n];
  }

  printf("A soma dos dez números é %f.", soma);

	return 0;
}
