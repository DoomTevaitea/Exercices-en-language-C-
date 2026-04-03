#include <stdio.h>

int main(){
    int HT;
    float TVA;
    printf("entrer la TVA : ");
    scanf("%f", &TVA );
    printf("entrer le prix HT :");
    scanf("%d" , &HT);
    printf("%f" , TVA);
    printf("%d/n", HT);
}