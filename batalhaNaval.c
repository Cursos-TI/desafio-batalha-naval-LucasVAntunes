#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 10
#define COLUNA 10


int main() {
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    //Declaração de variáveis do tabuleiro e dos navios

    int tabuleiro [LINHA][COLUNA] = {0};
    int naviohorizontal [3] = {3,3,3};
    int naviovertical [3] = {3,3,3};
    int naviodiagonal1 [3] = {3,3,3};
    int naviodiagonal2 [3] = {3,3,3};
    int cone [3][5];
    int cruz [3][5];
    int octaedro [3][5];

    //Habilidades

    //Cone

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cone [i][j] = 0;
            if ((i == 2) || (i == 0 && j == 2) || (i == 1 && (j > 0 && j < 4))){
                cone [i][j] += 1;
            }
        }}
        
        /*                       DEMONSTRAÇÃO CONE
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf ("%d", cone [i][j]);
        }
        printf("\n");
        }
        printf("\n");*/

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    //Loop para posicionar os navios

    for (int i = 0; i < 3; i++){
    
        tabuleiro [2][i + 3] = naviohorizontal [i];
        tabuleiro [i + 6][8] = naviovertical [i];    
    
    //Navios diagonais
        
        tabuleiro [8 - i][1 + i] = naviodiagonal1 [i];
        tabuleiro [i + 1][7 + i] = naviodiagonal2 [i];
    }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf("    ***BATALHA NAVAL***\n\n");
    printf("    A B C E D F G H I J\n"); // Coordenadas (colunas)
    
    for (int linha = 0; linha < LINHA; linha++)
    {
        if (linha < LINHA - 1){ //Espaço para alinhar coordenadas das linhas (com o 10)
            printf (" ");
            }

            printf ("%d| ", linha + 1); // Coordenadas (linhas)

            for (int coluna = 0; coluna < COLUNA; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }
    printf ("\n\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
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