#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum Colors_card {
    Pick,
    Coeur,
    Carreau,
    Trefle
};

typedef struct {
    enum Colors_card colorscard;
    int value_of_the_card;

} Card;

typedef struct {
    int size;
    Card cards[52];
}Deck;

void init_deck(Deck *deck);
void show_deck(Deck *deck);
void shuffle (Deck *deck);

void init_deck(Deck *deck){
    deck->size = 52;
    int colors = 0;
    int indice = 0;
    for(int i = 1; i <= deck->size; i++){
            deck->cards[i].value_of_the_card = i - indice;
            deck->cards[i].colorscard = colors;
            if(i % 13 == 0 && i != 0){
                colors += 1;
                indice += 13;
            }
        }
        
}

void show_deck(Deck *deck){
    for(int i = 0; i <= deck->size; i++){
        switch(deck->cards[i].colorscard){
            case 0 :
                printf("%d Pique\n", deck->cards[i].value_of_the_card);
                break;
            case 1 :
                printf("%d Coeur\n", deck->cards[i].value_of_the_card);
                break;
            case 2 :
                printf("%d Carreau\n", deck->cards[i].value_of_the_card);
                break;
            case 3 :
                printf("%d Trefle\n", deck->cards[i].value_of_the_card);
                break;
        }
    }
}

void shuffle (Deck *deck){
    int nombre_de_melange;
    for(i = 0; i < nombre_de_melange ; i ++){
        
    }
}

int main(){
    Deck *deck;
    init_deck(deck);
    show_deck(deck);
}