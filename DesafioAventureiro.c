#include <stdio.h>

int main(){

    int T = 1;

    printf("Movimento da Torre: \n");
    while (T <= 5)
    {
        printf("Direita\n");
        T++;
    }


    int B = 1;
    
    printf("\nMovimento do Bispo: \n");
    do
    {
        printf("Cima, Direita\n");
        B++;

    } while (B <= 5);


    printf("\nMovimento da Rainha: \n");
    for (int R = 1; R <= 8; R++)
    {
        printf("Esquerda\n");
    }

    
    printf("\nMovimento do Cavalo: \n");
    
    int MovBaixo = 2, MovEsquerda = 1;

    for (int Cb = 1; Cb <= MovBaixo; Cb++)
    {
        printf("Baixo\n");
        for (int Ce = 1; Ce <= MovEsquerda; Ce++)
        {
            if (Cb == 2)
            {
                printf("Esquerda\n");
            }
            
        }
        
        
    }
  
    return 0;
}