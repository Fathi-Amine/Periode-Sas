#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double r;
    float pi = 3.14;

    printf("Entrez la longueur du rayon r \n");
    scanf("%lf", &r);

    float c;
    c = 2 * r * pi;
    printf("la circonférence du cercle est : %lf", c);
    return 0;

}
