#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
      
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // inicializar a matriz com zeros

    //Posicionamneto de navios
    tabuleiro[8][5] = 3;
    tabuleiro[5][9] = 3;
    tabuleiro[6][9] = 3;
    tabuleiro[7][9] = 3;
    tabuleiro[8][4] = 3;
    tabuleiro[8][6] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[2][9] = 3;
    tabuleiro[3][8] = 3;
    tabuleiro[4][7] = 3;
    
    //Imprime o titulo
    printf("JOGO DE BATALHA NAVAL\n");
     //Imprime as letras do topo
    printf(" ");//Espaço para alinhar com os numeros da lateral
    for(int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");
    //Imprime a matriz com os numeros na lateral
    for (int i = 0; i < 10; i++){
        //imprime o numero da linha (1 a 10) com alinhamento
        if (i + 1 < 10)
        printf("%d ",i + 1);

        else
        printf("%d", i + 1);
      // imprime os valores da linha
        for (int j = 0; j < 10; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

   return 0;
   printf("Novo commit\n");
}
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

