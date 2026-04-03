#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

/*int main (int argc , char* argv[]){
    FILE* file;
    int number;

    file = fopen( argv[1] , "r+");

    if (file == NULL){
        return 1;
    }
    if(fscanf(file, "%d", &number) == EOF){
        printf("erreur de scanf");
        return -1;
    }
    printf("nombre lu : %d\n", number);
    number += 1;
    printf("nombre incrementer : %d\n", number);
    fprintf(file, "%d\n", number);
    fclose(file);

}*/