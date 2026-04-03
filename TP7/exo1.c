#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

typedef struct{
    Point origine;
    Point destination;
} Vector2D;

Point get_middle_point(Vector2D vector);
float get_vector_distance(Vector2D vector);

Point get_middle_point(Vector2D vector){
    Point pointmiddle;
    pointmiddle.x = (vector.origine.x + vector.destination.x)/2;
    pointmiddle.y = (vector.origine.y + vector.destination.y)/2;
    return pointmiddle;
}

float get_vector_distance(Vector2D vector){
    float carree1 = pow((vector.destination.x - vector.origine.x),2);
    float carree2 = pow((vector.destination.y - vector.origine.y),2);
    float distance = sqrt(carree1 + carree2);
    return distance;
}


int main(){
    Vector2D vector;
    printf("entrer l'abcisse origine : ");
    scanf("%f" , &vector.origine.x);

    printf("entrer l'ordonnée origine : ");
    scanf("%f" , &vector.origine.y);

    printf("entrer l'abcisse destination : ");
    scanf("%f" , &vector.destination.x);

    printf("entrer l'ordonnée destination : ");
    scanf("%f" , &vector.destination.y);
    
    printf("voici les coordonnées : %.2f %.2f \n", 
    get_middle_point(vector).x, get_middle_point(vector).y);
    printf("distance entre les 2 points : %.2f\n", 
    get_vector_distance(vector) );
}