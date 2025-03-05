#include <stdio.h>

int main(){

int i = 0; //variavel da torre
int j = 0; //variavel do bispo
int k = 0; //variavel da rainha

printf("A Torre irá se movimentar assim: \n"); //movimento da torre usando for
for (i = 0; i<5; i++)
{
 printf("Direita\n");
}

printf("\n"); //pular linha
printf("\n"); //pular linha
printf("O Bispo irá se movimentar assim: \n"); //movimento do Bispo usando while
while (j < 5)
{
    printf("Cima, Direita \n");
    j++;
}
printf("\n"); //pular linha
printf("\n"); //pular linha

printf("A Rainha irá se movimentar assim: \n"); //movimento da Rainha usando do-while

do 
{
    printf("Esquerda\n");
k++;
} while (k < 8);

}
