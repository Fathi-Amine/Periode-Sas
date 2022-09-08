#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char num[3];

    printf("Entrez un nombre entier a trois chiffres : \n");
    scanf("%s", &num);

    printf("%c%c%c", num[2],num[1],num[0]);
    return 0;

}
