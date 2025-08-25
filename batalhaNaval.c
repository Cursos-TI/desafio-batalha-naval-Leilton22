#include <stdio.h>

int main(){

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // inicializar a matriz com zeros

    //Cone
    tabuleiro[0][2] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[2][0] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    //Cruz
    tabuleiro[3][6] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[5][6] = 3;

    //Octaedro
    tabuleiro[6][3] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[7][4] = 3;
    tabuleiro[8][3] = 3;
    

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
}

