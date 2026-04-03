#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char **array;
    int N = 3;
    int lines = 3;
    int columns = 3;
    char vide = '.';
    char x = 'x';
    char o = 'o';
    array = malloc(lines * sizeof(char *));
    for(int i = 0; i < N ; i++){
        array[i] = malloc(columns * sizeof(char));
        printf("\n");
        for(int j = 0; j < N ; j++){
            array[i][j] = vide;
            printf(" %c| ", array[i][j]);
        }
    }
    printf("\n");
}