#include "library.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void create_line(int size, int red, int green, int blue) {
	for( int i = 0; i < size ; i ++ ) {
		create_square(red, green , blue);
	}
}

int main() {
	for (int i = 0; i < 10 ; i += 2){
		for(int n = 0 ; n < (9 - i)/2; n++){
					create_empty_square();
				}
		for (int j = 0 ;j <= i ; j++){
			if (j % 2 == 0){
				create_square(0, 255 , 0);
			}
			else{
				create_square(255, 0 , 0);
			}
		}
	new_line();
	}	
	for (int j =0 ; j < 6 ; j++){
		create_line(3,0,0,0);
		create_line(3,139,69,19);
		new_line();
	}
	draw();
}	