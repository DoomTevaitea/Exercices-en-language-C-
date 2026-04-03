#include <stdio.h>

int max(int *numbers , int size){
    int max = numbers[0];
    for(int i = 0; i < size ; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
        
    }
    return max;
}
int main(){
    int numbers[4] = {1,3,5,6};
    printf("le max est : %d\n", max(numbers, 4));
}