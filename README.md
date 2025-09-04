# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Batalha Naval - Três Níveis de Complexidade

Bem-vindo ao desafio "Batalha Naval"! Este projeto desafiará suas habilidades de programação utilizando vetores e matrizes para simular um jogo de Batalha Naval, dividido em três níveis: Novato, Aventureiro e Mestre. Em cada nível, novas funcionalidades serão adicionadas, tornando o desafio progressivamente mais complexo.

## 🏅 Nível Novato
#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

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
Neste nível inicial, você implementará a lógica básica de posicionamento de navios em um tabuleiro de Batalha Naval utilizando vetores bidimensionais.

### 🚩 Objetivos:
- **Posicionamento dos Navios:** O sistema deve simular a localização de dois navios no tabuleiro, um posicionado verticalmente e outro horizontalmente.
- **Utilização de Vetores:** Os navios serão posicionados utilizando vetores bidimensionais, com coordenadas X e Y.
- **Exibição de Coordenadas:** O sistema deve exibir as coordenadas de cada parte dos navios no console utilizando `printf`.

### 📥 Entrada de Dados:
- Os valores serão inseridos manualmente por meio de variáveis no código.

### 📤 Saída de Dados:
- Após o posicionamento, o sistema deve exibir as coordenadas dos navios de forma clara e organizada.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o tabuleiro e adicionará mais navios, incluindo posicionamentos na diagonal.

### 🆕 Diferença em relação ao Nível Novato:
- **Tabuleiro 10x10:** O tabuleiro será expandido para uma matriz 10x10.
- **Posicionamento de Quatro Navios:** O sistema deverá posicionar quatro navios, incluindo dois na diagonal.
- **Exibição Completa do Tabuleiro:** O sistema exibirá toda a matriz, onde 0 indica uma posição sem navio e 3 indica uma posição ocupada.

### 🚩 Novas Funcionalidades:
- **Matriz 10x10:** Implementação de uma matriz maior para representar o tabuleiro.
- **Posicionamento de Navios na Diagonal:** Adição de navios posicionados diagonalmente.
- **Exibição do Tabuleiro Completo:** O sistema mostrará o tabuleiro completo, indicando as posições ocupadas e livres.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a implementação de habilidades especiais representadas por matrizes específicas no tabuleiro.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Habilidades Especiais:** O sistema deve definir áreas de habilidades utilizando matrizes com padrões específicos: cone, cruz e octaedro.
- **Estruturas de Repetição Aninhadas:** Utilização de loops aninhados para percorrer e preencher as áreas afetadas pelas habilidades.

### 🚩 Novas Funcionalidades:
- **Matrizes de Habilidades:** Implementação de três matrizes para representar habilidades especiais no tabuleiro.
- **Padrões de Habilidade:** Criação de padrões específicos (cone, cruz, octaedro) para definir as áreas afetadas.
- **Exibição das Áreas Atingidas:** O sistema exibirá o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas afetadas.

### Exemplo de Saída:

Exemplo e comando:
printf("%d ",matriz[i][j]);

### Exemplo de saída de habilidade em cone:

0 0 1 0 0

0 1 1 1 0

1 1 1 1 1

### Exemplo de saída de habilidade em octaedro:

0 0 1 0 0

0 1 1 1 0

0 0 1 0 0

### Exemplo de saída de habilidade em cruz:

0 0 1 0 0

1 1 1 1 1

0 0 1 0 0





---

## 📋 Requisitos Funcionais Comuns
- **Entrada de Dados:** Os valores serão inseridos manualmente por meio de variáveis no código.
- **Utilização de Matrizes:** Os dados devem ser estruturados de maneira eficiente utilizando matrizes.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara e organizada.

## 📌 Requisitos Não Funcionais Comuns
- **Performance:** O sistema deve executar operações de forma eficiente, sem atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros sobre a função de cada parte do código.
- **Manutenibilidade:** O código deve ser organizado e fácil de entender, facilitando futuras manutenções e expansões.

---

Boa sorte no desenvolvimento deste desafio! Aproveite para aprimorar suas habilidades em vetores e matrizes enquanto progride pelos níveis.

Equipe de Ensino - MateCheck
