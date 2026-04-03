#include <stdio.h>
#include <stdlib.h>

int main() {
    int price = rand() % (100 + 1);
    int guess;
    int compteur = 0;
    printf("devine un chiffre entre 1 et 100 :\n");
    while(guess != price){
        scanf("%d",&guess);
        compteur ++;
        if(guess < price){
            printf("plus grand , reesaye :\n");
        }
        else if(guess > price){
            printf("plus petit , reesaye :\n");
        }
        else{
            printf("bon chiffre avec %d essaie\n",compteur);
        }
    }
}