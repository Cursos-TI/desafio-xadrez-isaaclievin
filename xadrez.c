#include <stdio.h>

int main() {

    // DECLARANDO VARIÁVEIS

    int i = 0;
    int x = 1;

    // MOVER O BISPO 5 CASA NA PARA CIMA E A DIREITA - DIAGONAL

    while (i < 5){
        printf ("Bispo -> Cima/Esquerda \n");
        i++;
    }
    
    // MOVER A TORRE 5 CASAS PARA A DIREITA - HORIZONTAL
    
    for (int a = 0; a < 5; a++) {
        printf("Torre -> Direita \n");
    }

    // MOVER A RAINHA 8 CASAS PARA ESQUERDA - HORIZONTAL

    do {
        printf("Rainha -> Esquerda \n");
        x++;
    } while (x <= 8);


    return 0;
}