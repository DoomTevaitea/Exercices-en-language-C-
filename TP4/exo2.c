#include <stdio.h>

int main() {
    int number;
    int a = 1;
    int compteur = 1;
    printf("entrer un nombre : ");
    scanf("%d",&number);
    while(compteur <= number){
        a = a * compteur ;
        compteur ++;
    } printf("la factorielle de %d = %d\n", number , a);
}