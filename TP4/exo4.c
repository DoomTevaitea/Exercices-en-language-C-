#include <stdio.h>

int main() {
    int ldl;
    int resultat;
    printf("longueur de ma liste voulue :");
    scanf("%d",&ldl);
    for (int i = 1; i <= ldl ; i++){
        for(int j = 1 ; j <= ldl ; j++){
            resultat = i * j;
            printf("%d ",resultat);
        }
        printf("\n");
    }
    return 0; 
}
   