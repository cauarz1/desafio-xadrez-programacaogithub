#include <stdio.h>

int main(){

//                          TORRE usando (FOR) 5 casas para direita
    int t;
    printf("Movimento da Torre:\n");
         for(t = 1; t <= 5; t++){
            printf("Casa %d: Direita\n", t);    //imprimindo as direção do movimento
     }
printf("\n");











//                 BISPO usando (WHILE) 5 casas na diagonal para cima e à direita
printf("Movimento do Bispo:\n");
int b = 1;
while (b <= 5){
    printf("Casa %d: Cima, Direita\n", b);

    b++;
}
printf("\n");











//                          RAINHA usando (DO-WHILE) 8 casas para esquerda
printf("Movimento da Ranha:\n");
int r = 1;
do{
    printf("Casa %d: Esquerda\n", r);
    r++;

}while(r <= 8);










return 0;
}
