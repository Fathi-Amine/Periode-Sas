
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("enter the first value : \n");
    scanf("%d", &a);
    printf("enter the second value : \n");
    scanf("%d", &b);
    printf("enter the third value : \n");
    scanf("%d", &c);

    double Somme, Moyenne;
    Somme = a + b + c;
    Moyenne = Somme / 3;
    printf("%lf \n", Somme);
    printf("%lf", Moyenne);

    return 0;

}
