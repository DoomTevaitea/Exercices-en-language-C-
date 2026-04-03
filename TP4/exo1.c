#include <stdio.h>

int main(){
    int totnote = 0;
    int notes[5] = {8, 14, 12, 16, 8};
    for (int a = 0; a < 5; a++){
        totnote = totnote + notes[a];
    }
    float moyenne = totnote / 5;
    printf("moyenne = %.2f\n",moyenne);
}
