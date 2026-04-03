#include <stdio.h>

int main() {
    float TVA = 1.20;
    int HT = 100;
    float TTC = HT * TVA;

    printf("montant de la TVA : %.2f", TVA);
    printf("prix TTC : %.2f", TTC);
}

