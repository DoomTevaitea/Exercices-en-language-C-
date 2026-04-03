#include <stdio.h>
#include <stdlib.h>

int* tabldy(int nombredecara){
    int *tableau = malloc(nombredecara * sizeof(int));
    
    if (tableau == NULL){
        printf("echec de l'allocation memoire\n");
        return NULL;
    }
    for (int i = 0 ; i < nombredecara ; i++){
        tableau[i] = i + 97;
    }
    return tableau;
}








int main(){
    int nombredecara = 26;
    int *tableau = tabldy(nombredecara);
    if (tableau == NULL) return 1;
    for (int i = 0 ; i < nombredecara ; i++){
        printf("%c\n" , tableau[i]);
    }
    printf("\n");
    free(tableau);
    return 0;
}