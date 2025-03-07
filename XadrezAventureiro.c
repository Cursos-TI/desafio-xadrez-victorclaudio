#include <stdio.h>

int main(){


    // Variáveis para controle do movimento das peças
    int i = 0; // Variável da torre
    int j = 0; // Variável do bispo
    int k = 0; // Variável da rainha
    int x = 0, y = 0; // Variáveis para o movimento do cavalo

    // Movimento da Torre
    printf("A Torre irá se movimentar assim: \n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n"); // A Torre move-se para a direita
    }

    printf("\n"); // Pular linha
    printf("\n"); // Pular linha

    // Movimento do Bispo
    printf("O Bispo irá se movimentar assim: \n");
    while (j < 5) {
        printf("Cima, Direita \n"); // O Bispo move-se para cima e à direita
        j++;
    }

    printf("\n"); // Pular linha
    printf("\n"); // Pular linha

    // Movimento da Rainha
    printf("A Rainha irá se movimentar assim: \n");
    do {
        printf("Esquerda\n"); // A Rainha move-se para a esquerda
        k++;
    } while (k < 8);


    printf("\n"); // Pular linha
    printf("\n"); // Pular linha
    printf("O Cavalo irá se movimentar assim: \n");
    
    // Loop para o movimento do cavalo
 for (x = 0; x < 1; x++) {  
    y = 0;  // Reseta y a cada nova iteração do for
    while (y < 2) {  // Move-se 2 vez para baixo
        printf("Baixo\n");
        y++;
    }
    printf("Esquerda\n");  // Move-se 1 vez para a esquerda
}

    return 0; // Fim do programa
}