#include <math.h>
#include <unistd.h>

int main (int argc , char* argv[]){
    int number;
    FILE* file;
    file = fopen( argv[1] , "r+");

    if (file == NULL){
        return 1;
    }

    if(fscanf(file, "%d", &number) == EOF){
        printf("erreur de scanf");
        return -1;
    }

    printf("nombre lu : %d\n", number);
}