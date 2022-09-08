#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int c, f;
    printf("Enter the temperature in fahrenheit : \n");
    scanf("%d", &f)

    c = (f - 32) / 1.8;

    printf("La temperature en Celsius est : %d", c);
    return 0;
 }
