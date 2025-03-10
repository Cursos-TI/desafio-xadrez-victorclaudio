#include <stdio.h>


// Função recursiva para mover a Torre para a direita
void torreB(int torreMOV) {
    if (torreMOV == 0) {
        return;// Condição de parada 
    }
        printf("Direita \n");

        torreB(torreMOV - 1);// Chama recursivamente para o próximo movimento
    } 


    void bispoA (int bispoM, int bispoN) { // Função recursiva para mover o Bispo (Cima e Direita)
        if (bispoM == 0, bispoN == 0) {
            return; // Condição de parada
            
        }
        printf(" Cima, Direita \n");
        bispoA(bispoM - 1, bispoN - 1);
    }

    void rainhaA (int rainhaM) { // Função recursiva para mover a Rainha para a esquerda
        if (rainhaM == 0) {
            return; // Condição de parada
            
        }
        printf(" Esquerda \n");
        rainhaA(rainhaM - 1);
    }

    // Função para o movimento do Cavalo (para cima e para a direita)
void CavaloA (int x, int y) {
    if (x == 2) { // Condição de parada para o movimento em "L"
        return; // Condição de parada
    }

    // Movimento para cima
    printf("Cima\n");
    y++; // Atualiza a variável de movimento para cima

    if (y == 2) { // O cavalo já se moveu 2 casas para cima
        printf("Direita\n"); // Movimento para a direita
        x++; // Atualiza a variável de movimento para a direita
        return; // Finaliza o movimento
    }

    CavaloA(x, y); // Recursivamente chama a função para continuar o movimento
}

int main() {


  // Movimentação da Torre (5 movimentos para a direita)
  printf("A Torre irá se movimentar assim: \n");
  torreB(5); 
  printf("\n\n");

// Movimento do Bispo
printf("O Bispo irá se movimentar assim: \n");
bispoA(5,5);
printf("\n\n");

// Movimento da Rainha
printf("A Rainha irá se movimentar assim: \n");
rainhaA(8);
printf("\n\n");

  // Movimentação do Cavalo (2 casas para cima e 1 para a direita)
    printf("O Cavalo irá se movimentar assim: \n");
    CavaloA(0, 0); 
    printf("\n");

    return 0;
}