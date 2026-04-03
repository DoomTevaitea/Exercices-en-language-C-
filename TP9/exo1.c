#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int main (int argc , char* argv[]){
    FILE* file;
    char buffer[256];
    file = fopen( argv[1] , "r+");

    if (file == NULL){
        return 1;
    }

    int compteur = 0;

    while(fgets(buffer, sizeof(buffer), file) != NULL){
        compteur += 1;
        printf("%s", buffer);
    }
    printf("\n");
    printf("nombre de ligne %d\n", compteur);
    fclose(file);
}