#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;

    printf("Entrez la valeur x1 : \n");
    scanf("%d", &x1);


    printf("Entrez la valeur x2 : \n");
    scanf("%d", &x2);


    printf("Entrez la valeur y1 : \n");
    scanf("%d", &y1);


    printf("Entrez la valeur y2 : \n");
    scanf("%d", &y2);

    int distance;
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    printf("la distance est: %d", distance);
    return 0;

}
