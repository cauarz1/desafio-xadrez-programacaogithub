#include <stdio.h>

//                                          TORRE
    void moverTorre(int t){
        if(t > 5) return;
            printf("Casas %d: Direita\n", t);
            moverTorre(t + 1);
    }




//                                          BISPO
    void moverBispo(int b){
        if(b > 5) return;
            printf("Casas %d: Cima, Direita\n", b);
            moverBispo(b + 1);
    }




//                                          RAINHA
    void moverRainha(int r){
        if(r > 8) return;
            printf("Casas %d: Esquerda\n", r);
            moverRainha(r + 1);
    }




//                                          CAVALO
    void moverCavalo(int c){
        if(c > 2){
            printf("Direita\n");
            return;
        }
            printf("Cima\n");
            moverCavalo(c + 1);
    }







int main(){
    printf("Movimento da Torre:\n");
    moverTorre(1);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(1);
    printf("\n");

    printf("Movimendo da Rainha:\n");
    moverRainha(1);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(1);
    printf("\n");










    return 0;
}