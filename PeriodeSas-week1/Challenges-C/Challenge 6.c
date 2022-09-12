#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int num;
    printf("Entrez un nombre entier a 3 chiffres ; \n");
    scanf("%d", &num);

    printf("la valeur equivalente en octal est : %o", num);
    printf("la valeur equivalente en hexidecimal est : %X", num);
    return 0;
 }
