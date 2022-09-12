#include <stdio.h>
#include <stdlib.h>

int main()
{
    double mile , metre ;
    printf("Entrez la distance en Mile : \n");
    scanf("%lf", &mile);

    metre = mile * 1609;

    printf("la distance en Metre est : %.2lf \n", metre);

    return 0 ;
}
