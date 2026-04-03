#include <stdio.h>

int main() {
     int numbers[10] ={ 4, 5, 1, 10, 32, 0, 9, 14, 23, 2};
     int max = 0;
     for (int i = 0; i < 10; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }

    }printf("le max de cette liste = %d\n",max);
    }