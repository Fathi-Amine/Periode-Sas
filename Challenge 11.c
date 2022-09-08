#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double largeur , longueur;

    printf("Entrez la longueur du rectangle : \n");
    scanf("%lf", &longueur);

    printf("Entrez la largeur du rectangle : \n");
    scanf("%lf", &largeur);

    float c;
    c = 2 * (largeur + longueur);
    printf("la circonference du rectangle est : %lf", c);
    return 0;

}
