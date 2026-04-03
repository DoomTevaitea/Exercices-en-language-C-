#include <stdio.h>

int swap(int *p1, int *p2){
    int a = *p1;
    *p1 = *p2 ;
    *p2 = a;
    return *p1;
}


int main(){
    int p1 = 5;
    int p2 = 3;
    swap(&p1 , &p2);
    printf("%d , %d\n",p1 , p2);
    return 0;
}