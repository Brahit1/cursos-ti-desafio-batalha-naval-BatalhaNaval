#include <stdio.h>

#define Linhas 10

#define Colunas 10

// Desafio Batalha Naval - MateCheck

// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

// Siga os comentários para implementar cada parte do desafio.

int main() {

//Área rea de Criação de Variáveis 

int tabuleiro [Linhas][Colunas];

for(int i = 0;i < 10;i++){
    
for(int j = 0;j < 10;j++){
    
tabuleiro[i][j] = 0;

}    
    
}

//Exibicao da Habilidade Cone

tabuleiro[5][2] = 3;

tabuleiro[6][1] = 3;

tabuleiro[6][2] = 3;

tabuleiro[6][3] = 3;

tabuleiro[7][0] = 3;

tabuleiro[7][1] = 3;

tabuleiro[7][2] = 3;

tabuleiro[7][3] = 3;

tabuleiro[7][4] = 3;

//Exibindo Habilidade Cruz

tabuleiro[0][3] = 3;

tabuleiro[1][3] = 3;

tabuleiro[2][3] = 3;

tabuleiro[2][2] = 3;

tabuleiro[2][1] = 3;

tabuleiro[2][4] = 3;

tabuleiro[2][5] = 3;

tabuleiro[3][3] = 3;

tabuleiro[4][3] = 3;

//Exibindo Habilidade Octaedro

tabuleiro[4][7] = 2;

tabuleiro[5][6] = 2;

tabuleiro[5][7] = 2;

tabuleiro[5][8] = 2;

tabuleiro[6][5] = 2;

tabuleiro[6][6] = 2;

tabuleiro[6][7] = 2;

tabuleiro[6][8] = 2;

tabuleiro[6][9] = 2;

tabuleiro[7][6] = 2;

tabuleiro[7][7] = 2;

tabuleiro[7][8] = 2;

//Área de Exibiçao de Do Tabuleiro 

printf(" ");

printf("*** Jogo Batalha Naval em C - MateCheck *** \n\n");
    
printf("  ");

printf("Exibindo Navios: \n\n");

//Exibicao do Cabeçalho com Letras

printf("  ");

for(char letra = 'A'; letra <= 'J';letra++){
    
printf(" ");

printf("%c", letra);
    
}

printf("\n");

//Exibindo Linhas do Tabuleiro

for(int i = 0; i < Linhas;i++){
    
printf(" ");
    
printf("%d", i);    

for(int j = 0; j < Colunas;j++){

printf(" ");

printf("%d", tabuleiro[i][j]);

}

printf("\n");

}

return 0;

}
