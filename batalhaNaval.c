#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    #include <stdio.h>

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
            // Linha 3, colunas D,E,F  → j=3,4,5
            // Coluna H (j=7), linhas 6,7,8 → i=6,7,8
            if ((i == 3 && (j >= 3 && j <= 5)) ||
                ((i >= 6 && i <= 8) && j == 7)) {
                printf(" 3 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    
int main() {
    char linha[] = {'A','B','C','D','E','F','G','H','I','J'};
    int tab[10][10] = {0}; // 0 = água, 3 = parte de navio

    printf("Tabuleiro de Batalha Naval\n\n");

    // -----------------------------
    // Marcação das posições (SEM if)
    // -----------------------------

    // 1) Linha 3 -> índice 2; colunas D..F (D=3,E=3,F=3) 
    for (int j = 3; j <= 5; j++) tab[2][j] = 3;

    // 2) Coluna H ( H=3, H=5, H6 )
    for (int i = 3; i <= 5; i++) tab[i][7] = 3;

    // 3) Navio 1: DIAGONAL PRINCIPAL (B3, C4, D5)
    int i0 = 0, j0 = -1;
    for (int k = 2; k < 5; k++) {
        tab[i0 + k][j0 + k] = 3;  
    }

    // 4) Navio 2: DIAGONAL SECUNDÁRIA (D7, C8, B9)
    //    Ponto inicial (6,3) => D7, 3: (6,3),(7,2),(8,1) -> D7, C8, B9.
    int i1 = 6, j1 = 3;
    for (int k = 0; k < 3; k++) {
        tab[i1 + k][j1 - k] = 3;
    }

    // -----------------------------
    // Impressão
    // -----------------------------

    // Cabeçalho (A-J)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
