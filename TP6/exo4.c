#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str){
    int len = 0;
    while(str[len] != '\0'){
        len ++;
    }
    return len;
}

int main(){
    const char str[] = "bonjour";
    printf("%d\n" ,my_strlen(str));
}