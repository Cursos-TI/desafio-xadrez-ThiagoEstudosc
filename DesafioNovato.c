#include <stdio.h>

int main(){

    int T = 1;

    printf("Movimento da Torre: \n");

    while (T <= 5)
    {
        printf("Está a Direita\n", T);
        T++;
    }

    int B = 1;
    
    printf("Movimento do Bispo: \n");

    do
    {
        printf("Está em Cima, Direita\n");
        B++;

    } while (B <= 5);

    printf("Movimento da Rainha: \n");
    for (int R = 1; R <= 8; R++)
    {
        printf("Está a Esquerda\n");
    }
    
    
    return 0;
}