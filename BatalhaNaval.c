#include <stdio.h>

#define TAM 10
#define AGUA '.'
#define NAVIO 'N'

int main() {
    char tabuleiro[TAM][TAM];
    int i, j;

    // 1. Inicializa o tabuleiro com água
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Posiciona navios manualmente (tamanho 3)
    // Navio 1: horizontal na linha 2 (índice 1)
    tabuleiro[1][2] = NAVIO;
    tabuleiro[1][3] = NAVIO;
    tabuleiro[1][4] = NAVIO;

    // Navio 2: vertical na coluna 6 (índice 5)
    tabuleiro[3][5] = NAVIO;
    tabuleiro[4][5] = NAVIO;
    tabuleiro[5][5] = NAVIO;

    // Navio 3: horizontal na linha 7
    tabuleiro[7][0] = NAVIO;
    tabuleiro[7][1] = NAVIO;
    tabuleiro[7][2] = NAVIO;

    // 3. Exibe o tabuleiro
    printf("=== BATALHA NAVAL ===\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}