#include <stdio.h>

//Movimento recursivo da Torre:
void MovT(int T){

    if (T == 1) return;
    {
        printf("Direita\n");
        MovT(T - 1);
    }
    
}

//Movimento Recursivo do Bispo com Loops Aninhados:
void MovB(int B){

    for (int c = 1; c <= B; c++)
    {
        for (int d = 1; d < B; d++)
        {
            printf("Cima(%d), direita(%d)\n", c, d);
        }
        
    }
    
}

//Movimento Recursivo da Rainha:
void MovR(int R){

    if (R == 1) return;
    {
        printf("Esquerda\n");
        MovR(R - 1);
    }

}

//Movimento do Cavalo com Loops Complexos:
void MovC(int C){

    for (int m = 0; m < C; m++)
    {
        if (m < 2) printf("Cima\n");
        if (m == 1) printf("Esquerda\n");
        
    }
    
    

}

int main(){

    int T = 5, B = 3, R = 8 , C = 3; 

    //Torre:
    printf("\nMovimento da Torre:\n");
    MovT(T);
    
    //Bispo com Loops Aninhados:
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    MovB(B);
    
    //Rainha:
    printf("\nMovimento da Rainha:\n");
    MovR(R);
    
    //Cavalo com Loops Complexos:
    printf("\nMovimento do Cavalo:\n");
    MovC(C);

    return 0;
}