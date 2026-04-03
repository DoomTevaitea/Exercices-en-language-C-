#include <stdio.h>

int main(){
    float taille;
    float poid;
    printf("entrer la taille en m: ");
    scanf("%f", &taille );
    printf("entrer le prix poid :");
    scanf("%f" , &poid);
    float IMC = poid / (taille * taille);
    printf("voici votre IMC : %.2f\n" , IMC);
}