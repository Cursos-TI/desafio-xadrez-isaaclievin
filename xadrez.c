#include <stdio.h>

int main() {

    // DECLARANDO VARIÁVEIS

    int i = 0;
    int x = 1;
    int movimemntocompleto = 1;
    int j;

    // MOVER O BISPO 5 CASA NA PARA CIMA E A DIREITA - DIAGONAL

    while (i < 5){
        printf ("Bispo -> Cima/Esquerda \n");
        i++;
    }
    printf("\n");
    
    // MOVER A TORRE 5 CASAS PARA A DIREITA - HORIZONTAL
    
    for (int a = 0; a < 5; a++) {
        printf("Torre -> Direita \n");
    }
    printf("\n");

    // MOVER A RAINHA 8 CASAS PARA ESQUERDA - HORIZONTAL

    do {
        printf("Rainha -> Esquerda \n");
        x++;
    } while (x <= 8);
    printf("\n");


    // MOVER O CAVALO 2 CASAS PARA BAIXO E 1 CASA PARA ESQUERDA - MOVIMENTO L

    while(movimemntocompleto--){

        for(j = 0; j < 2; j++){
            printf("Cavalo -> Baixo \n");
        }
        printf("Cavalo -> Esquerda \n");
    }
    printf("\n");

    return 0;
}