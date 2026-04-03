#include <stdio.h>

int main(){
    int nombre;
    int factorielle = 1;
    printf("rentrer un nombre : ");
    scanf("%d", &nombre);
    for (int i = 1 ; i <= nombre ; i++){
        factorielle = i * factorielle;
    } 
    printf("voici %d la factorielle de %d\n", factorielle , nombre);
}