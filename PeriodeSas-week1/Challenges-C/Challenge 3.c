#include <stdio.h>
#include <stdlib.h>

int main()
{
    double mile , metre ;
    printf("Entrez la distance en Metre : \n");
    scanf("%lf", &metre);

    mile = metre / 1000 / 1.609;

    printf("la distance en mile est : %lf \n", mile);

    return 0 ;
}
