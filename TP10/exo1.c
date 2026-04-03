#include <stdio.h>
#include <stdlib.h>
#include <string.h>






int main(){
    int array[4][4] = {
    };
    int sum = 0;
    for(int i = 0 ; i < 4 ; i ++){
        printf("\n");
        for(int j = 0 ; j < 4 ; j++){
            array[i][j] = 4*i + j + 1;
            sum += array[i][j];
            printf("%d ",array[i][j]);
        }
    }
    printf("\n");
    printf("somme = %d \n",sum);
    
}