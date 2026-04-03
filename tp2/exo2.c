#include <stdio.h>

int main() {
    float poid = 72;
    float taille = 1.77;

    float IMC = poid / (taille * taille);

    printf("voici votre IMC : %.2f" , IMC);
}