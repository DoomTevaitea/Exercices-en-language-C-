#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* array_concat(int *array1,int size1,int *array2,int size2){
    int *array3 = malloc((size1+size2)*sizeof(int));
    for(int i = 0 ; i < size1 ; i ++){
        array3[i] = array1[i];
    }
    for(int j = 0; j < size2; j++){
        array3[j + size1] = array2[j];
    }
    return array3;
}
    


int main(){
    int array1[5] = {1,1,1,1,1};
    int array2[7] = {2,2,2,2,2,2,2};
    int *a = array_concat(array1 ,5 ,array2 ,7 );
    printf("voici la concatenation :");
    for(int i = 0; i< 5+7 ; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}