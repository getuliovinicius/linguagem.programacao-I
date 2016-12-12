#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 	3
#define COLUNAS 3

int validar_jogada(unsigned int linha, unsigned int coluna,
	char tabuleiro[LINHAS][COLUNAS]) {

	if(linha < 1 || linha > 3) {
		printf("\n*** ERRO: LINHA DEVE ESTAR ENTRE 1 E 3 ***");
		return 0;
	}

	if(coluna < 1 || coluna > 3) {
		printf("\n*** ERRO:  COLUNA DEVE ESTAR ENTRE 1 E 3 ***");
		return 0;
	}

	if(tabuleiro[linha - 1][coluna - 1] != ' ') {
		printf("\n*** ERRO: ESTA POSIÇÃO JÁ FOI MARCADA. ESCOLHA OUTRA ***");
		return 0;
	}

	return 1;

}

void exibir_tabuleiro(char tabuleiro[LINHAS][COLUNAS]) {

	printf("\n");

	// Exibe a primeira linha da matriz (linha 0)
	printf(" %c | %c | %c\n",
		tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);

	// Exibe um separador
	printf("---+---+---\n");

	// Exibe a segunda linha da matriz (linha 1)
	printf(" %c | %c | %c\n",
		tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);

	// Exibe um separador
	printf("---+---+---\n");

	// Exibe a terceira linha da matriz (linha 2)
	printf(" %c | %c | %c\n",
		tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

	printf("\n");

}

char vencedor(char tabuleiro[LINHAS][COLUNAS]) {

	// Procura trinca na primeira linha
	if((tabuleiro[0][0] == 'O' || tabuleiro[0][0] == 'X')
		&& tabuleiro[0][1] == tabuleiro[0][0]
		&& tabuleiro[0][2] == tabuleiro[0][0]
	) {
		return tabuleiro[0][0];
	}
	// Procura trinca na segunda linha
	else if((tabuleiro[1][0] == 'O' || tabuleiro[1][0] == 'X')
		&& tabuleiro[1][1] == tabuleiro[1][0]
		&& tabuleiro[1][2] == tabuleiro[1][0]
	) {
		return tabuleiro[1][0];
	}
	// Demais possibilidades de vitória

	// Não há trica - sem vencedor
	return ' ';

}

int main()
{

	setlocale(LC_ALL, "");

	char jogo_velha[LINHAS][COLUNAS] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
	};

	char jogador = 'O', venc;
	unsigned int jogadas, lin, col;

	for(jogadas = 1; jogadas <= LINHAS * COLUNAS; jogadas++) {

		exibir_tabuleiro(jogo_velha);

		do {

			printf("\n\n-------------- JOGADA %u --------------", jogadas);

			printf("\nLinha da jogada para o jogador %c [1-3]: ", jogador);
			scanf("%u", &lin);

			printf("\nColuna da jogada para o jogador %c [1-3]: ", jogador);
			scanf("%u", &col);

		} while(validar_jogada(lin, col, jogo_velha) == 0);

		// Marca a posição para o jogador
		jogo_velha[lin - 1][col - 1] = jogador;

		if(jogadas >= 5) {

			venc = vencedor(jogo_velha);

			if(venc != ' ') {
				printf("\n*** FIM DE JOGO! %c É O VENCEDOR! ***", venc);
				break;
			}
			else if(jogadas == 9 && venc == ' ') {
				printf("\n*** FIM DE JOGO: DEU VELHA... ***");
			}

		}

		/*
		if (jogador == 'O') {
			jogador = 'X';
		}
		else {
			jogador = 'O';
		}
		*/
		jogador = (jogador == 'O' ? 'X' : 'O');

	}

	exibir_tabuleiro(jogo_velha);

	return 0;
}
