#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int main (int argc , char* argv[]){
    FILE* file;
    char buffer[256];
    int compteur = 0;

    file = fopen( argv[1] , "r+");

    if (file == NULL){
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        for(int i = 0 ; i < strlen(buffer) ; i++){
            if(buffer[i] == ' '){
                compteur += 1;
            }
        }
        compteur += 1;
    }
    printf("il y a %d mots",compteur);
    printf("\n");
    fclose(file);
    return 0;
}