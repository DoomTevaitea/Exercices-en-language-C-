#include <stdio.h>

int main(){
    int ch1;
    int ch2;
    char ope;
    int resultat;
    printf("entrer le premier chiffre :\n");
    scanf("%d", &ch1);
    printf("entrer le deuxieme chiffre:");
    scanf("%d", &ch2);
    printf("entrer l'operation (+, -, *, /):");
    scanf(" %c", &ope);

    if (ope == '+'){
        resultat = ch1 + ch2;
        printf("%d %c %d = %d\n",ch1 , ope ,ch2 ,resultat);
    } else if (ope == '-'){
        resultat = ch1 - ch2;
        printf("%d %c %d = %d\n",ch1 , ope ,ch2 ,resultat);
    } else if (ope == '*'){
        resultat = ch1 * ch2;
        printf("%d %c %d = %d\n",ch1 , ope ,ch2 ,resultat);
    } else if (ope == '/'){
        if(ch2 == 0){
            printf("division par 0 impossible\n");
        }else {
            resultat = ch1 / ch2;
            printf("%d %c %d = %d\n",ch1 , ope ,ch2 ,resultat);
        }
    } return 0;
}