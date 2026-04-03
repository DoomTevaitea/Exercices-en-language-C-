#include <stdio.h>
#include <string.h>

int main(){
    char string[25];
    char string_save[25] = "";
    
    printf("rentrer votre mots:");
    scanf("%s", &string);
    int length_string = strlen(string);
    strcpy(string_save, string);
    for( int i = 0 ; i < length_string / 2 ; i ++){
        if (i == (length_string - 1)/2){ 
        break;
        }
        string[i] = string[length_string - 1 - i];
        string[length_string - 1 - i] = string_save[i];
    }    
    if (strcmp(string, string_save) == 0) {
        printf("%s est un palindrome.\n", string_save);
    }
        
    else {
        printf("%s n'est pas un palindrome.\n", string_save);
    }
    return 0;
}