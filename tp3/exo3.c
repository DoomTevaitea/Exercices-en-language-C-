#include <stdio.h>

int main(){
    int heure;
    int joursemaine;
    int mois;;
    char *matinsoir;
    char *saison;
    printf("entrer l'heure :\n");
    scanf("%d", &heure);
    printf("entrer le jour de la semaine :\n");
    scanf("%d", &joursemaine);
    printf("entrer le mois :\n");
    scanf("%d", &mois);
    if (heure <= 12 && heure > 6){
        matinsoir = "matin";
    } else if (heure >= 13 && heure <= 19){
        matinsoir = "aprem-midi";
    } else {
        matinsoir = "soir";
    }
    
    if (mois == 12 || mois <= 3){
        saison = "hiver";
    }else if(mois > 3 && mois <= 5){
        saison ="printemps";
    }else if(mois > 5 && mois <= 8){
        saison = "été";
    }else {
        saison = "automne";
    }
    
    if (joursemaine == 7 || joursemaine == 6){
        printf("c'est un %s de %s le weekend\n" , matinsoir , saison);
    } else {
        printf("c'est un %s de %s \n" , matinsoir , saison);
    }
}
        