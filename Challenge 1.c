#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int a, b;
    printf("Enter the first value ; \n");
    scanf("%d", &a);
    printf("Enter the second value ; \n");
    scanf("%d", &b);

    double aPlusb, aMinusb, aTimesb, aDivbyb, aQuosb;

    aPlusb = a + b;
    aMinusb = a - b;
    aTimesb = a * b;
    aDivbyb = a / b;
    aQuosb = a % b;

    printf("a + b = %lf", aPlusb);
    printf("a - b = %lf", aMinusb);
    printf("a * b = %lf", aTimesb);
    printf("a / b = %lf", aDivbyb);
    printf("a % b = %lf", aQuosb);
    return 0;
 }
