#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("Tabuleiro de Batalha Naval\n\n");

    // Cabeçalho (A-J)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (int i = 1;  i <= 10; i++) {
        printf("%2d ",  i );

        for (int j = 0; j < 10; j++) {
            // Linha 3, colunas D,E,F  → j=3,4,5
            // Coluna H (j=7), linhas 6,7,8 → i=6,7,8
            if (( i == 3 && (j >= 3  && j <= 5)) ||
                (( i >= 6 && i <= 8) && j == 7)) {
                printf(" 3 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
#include <stdio.h>

int main() {
    char linha[] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("Tabuleiro de Batalha Naval\n\n");

    // Cabeçalho (A-J)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (int i = 1; i <= 10; i++) {
        printf("%2d ", i);

        for (int j = 0; j < 10; j++) {
            /* Marcações:
               - Linha 3, colunas D,E,F         -> (i==3, j=3..5)
               - Coluna H, linhas 6,7,8         -> (j==7, i=6..8)
               - Navio 1: B7, C6, D5            -> (7,1), (6,2), (5,3)
               - Navio 2: D8, E7, F6            -> (8,3), (7,4), (6,5)
            */
            if ( (i == 3 && (j >= 3 && j <= 5)) ||          // linha 3: D,E,F
                 ((i >= 6 && i <= 8) && j == 7) ||          // coluna H: linhas 6,7,8
                 (i == 7 && j == 1) || (i == 6 && j == 2) || (i == 5 && j == 3) || // navio 1
                 (i == 8 && j == 3) || (i == 7 && j == 4) || (i == 6 && j == 5)    // navio 2
               ) {
                printf(" 3 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
