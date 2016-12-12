/*************************************************************************************
 * Faculdade de Tecnologia de Franca “Doutor Thomaz Novelino”
 * SEGUNDO TRABALHO DE LINGUAGEM DE PROGRAMAÇÃO (C) - 2016/1
 * Autores:
 * ANDREIA CAROLINE SILVA ALVES <andreiamkalves@gmail.com> - RA 10900481523005
 * GETULIO VINICIUS TEIXEIRA DA SILVA <getuliovinits@gmail.com> - RA 1090481523012
 * Data de criação do arquivo:
 * 29/05/2016
 *************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Incluir a biblioteca de configurações regionais
#include <locale.h>
#include <ctype.h>
#include <string.h>

// Definição de constates
#define TAMANHO 4

// Declarar os protótipos
void exibe_matriz(unsigned char m_A[TAMANHO][TAMANHO]);
void girar_esquerda(unsigned char m_A[TAMANHO][TAMANHO]);
void girar_direita(unsigned char m_A[TAMANHO][TAMANHO]);

// Funcao principal
int main() {

    // Definir as configurações regionais
    setlocale(LC_ALL, "");

    // Declaração da matriz com carga inicial
    unsigned char m_A[TAMANHO][TAMANHO] = {
        {'A','B','C','D'},
        {'E','F','G','H'},
        {'I','J','K','L'},
        {'M','N','O','P'}
    };

    // Declaração das variaveis de controle
    int saida = 0;
    unsigned char escolha = 1;
    char opcao;

    // Mostra a matriz com a carga inicial
    printf("Inicialmente a matriz é assim:\n");
    exibe_matriz(m_A);

    // Loop para interação do usuário
    do {

        // Solicita a instrução pro usuário
        printf("\n%uª ESCOLHA:\n[E] - Girar à Esquerda\n[D] - Girar à Direira\n[S] - Sair do Programa\n>>> ", escolha);
        scanf("%c", &opcao);
        getchar(); // Impede a passagem direta apos teclar enter

        // Testa a opção escolhida pelo usuário
        switch (opcao) {
            case 'e':
            case 'E':
                printf("\n>Escolheu '%c'\n\nGirou para a Esquerda.\n", opcao);
                girar_esquerda(m_A);
                exibe_matriz(m_A);
                escolha++;
                saida = 0;
                break;
            case 'd':
            case 'D':
                printf("\n>Escolheu '%c'\n\nGirou para a Direita.\n", opcao);
                girar_direita(m_A);
                exibe_matriz(m_A);
                escolha++;
                saida = 0;
                break;
            case 's':
            case 'S':
                printf("\n>Escolheu '%c'\nO programa será encerrado...\nAté a próxima!\n", opcao);
                saida = 1;
                break;
            default:
                printf("\n>>> Opção inválida! <<<\nTente outra vez.\n");
                saida = 0;
                break;
        }
    } while (saida != 1);

    // Encerra o programa retornando 0 (zero)
    return 0;
}

// Funcao para exibição da matriz
void exibe_matriz(unsigned char m_A[TAMANHO][TAMANHO]) {

	// Pula uma linha
	printf("\n");

	// Exibe a primeira linha da matriz
	printf("  %i |  %i |  %i |  %i\n", m_A[0][0] - 64, m_A[0][1] - 64, m_A[0][2] - 64, m_A[0][3] - 64);

	// Exibe um separador
	printf("----+----+----+----\n");

	// Exibe a segunda linha da matriz
	printf("  %i |  %i |  %i |  %i\n", m_A[1][0] - 64, m_A[1][1] - 64, m_A[1][2] - 64, m_A[1][3] - 64);

	// Exibe um separador
	printf("----+----+----+----\n");

	// Exibe a terceira linha da matriz
	printf("  %i |  %i |  %i |  %i\n", m_A[2][0] - 64, m_A[2][1] - 64, m_A[2][2] - 64, m_A[2][3] - 64);

	// Exibe um separador
	printf("----+----+----+----\n");

	printf("  %i |  %i |  %i |  %i\n", m_A[3][0] - 64, m_A[3][1] - 64, m_A[3][2] - 64, m_A[3][3] - 64);

}

// Função para girar a matriz A para a esquerda
void girar_esquerda(unsigned char m_A[TAMANHO][TAMANHO]) {

    // Declara a matriz B de troca
    unsigned char m_B[TAMANHO][TAMANHO] = {
        {m_A[0][3],m_A[1][3],m_A[2][3],m_A[3][3]},
        {m_A[0][2],m_A[1][2],m_A[2][2],m_A[3][2]},
        {m_A[0][1],m_A[1][1],m_A[2][1],m_A[3][1]},
        {m_A[0][0],m_A[1][0],m_A[2][0],m_A[3][0]}
    };

    // Gira a matriz A
    m_A[0][0] = m_B[0][0];
    m_A[0][1] = m_B[0][1];
    m_A[0][2] = m_B[0][2];
    m_A[0][3] = m_B[0][3];
    m_A[1][0] = m_B[1][0];
    m_A[1][1] = m_B[1][1];
    m_A[1][2] = m_B[1][2];
    m_A[1][3] = m_B[1][3];
    m_A[2][0] = m_B[2][0];
    m_A[2][1] = m_B[2][1];
    m_A[2][2] = m_B[2][2];
    m_A[2][3] = m_B[2][3];
    m_A[3][0] = m_B[3][0];
    m_A[3][1] = m_B[3][1];
    m_A[3][2] = m_B[3][2];
    m_A[3][3] = m_B[3][3];

}

// Função para girar a matriz A para a direita
void girar_direita(unsigned char m_A[TAMANHO][TAMANHO]) {

    // Declara a matriz de troca
    unsigned char m_B[TAMANHO][TAMANHO] = {
        {m_A[3][0],m_A[2][0],m_A[1][0],m_A[0][0]},
        {m_A[3][1],m_A[2][1],m_A[1][1],m_A[0][1]},
        {m_A[3][2],m_A[2][2],m_A[1][2],m_A[0][2]},
        {m_A[3][3],m_A[2][3],m_A[1][3],m_A[0][3]}
    };

    // Gira a matriz A
    m_A[0][0] = m_B[0][0];
    m_A[0][1] = m_B[0][1];
    m_A[0][2] = m_B[0][2];
    m_A[0][3] = m_B[0][3];
    m_A[1][0] = m_B[1][0];
    m_A[1][1] = m_B[1][1];
    m_A[1][2] = m_B[1][2];
    m_A[1][3] = m_B[1][3];
    m_A[2][0] = m_B[2][0];
    m_A[2][1] = m_B[2][1];
    m_A[2][2] = m_B[2][2];
    m_A[2][3] = m_B[2][3];
    m_A[3][0] = m_B[3][0];
    m_A[3][1] = m_B[3][1];
    m_A[3][2] = m_B[3][2];
    m_A[3][3] = m_B[3][3];

}
