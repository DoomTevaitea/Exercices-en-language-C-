#include <stdio.h>

int main(){
    int nombretest;
    int est_premier = 1;
    printf("Entrer un nombre : ");
    scanf("%d", &nombretest);

    if (nombretest <= 1) {
        return 0;
    } else {
        for (int i = 2; i * i <= nombretest; i++) {
            if (nombretest % i == 0) {
                return 0;
                break;
            }
        }
    }
    return 0

}