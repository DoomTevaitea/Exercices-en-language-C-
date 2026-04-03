#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc , char* argv[]){
    int N = atoi(argv[1]);
    int **array;
    int lines , columns = N;
    array = malloc(lines * sizeof(int *));
    for(int i = 0; i < N ; i++){
        array[i] = (int *)malloc(columns * sizeof(int *));
        printf("\n");
        for(int j = 0; j < N ; j++){
            array[i][j] = N*i + j + 1;
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");
}