#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, delta, x, x2;
    printf("Enter the value a: "); scanf("%f", &a);
    printf("Enter the value b: "); scanf("%f", &b);
    printf("Enter the value c: "); scanf("%f", &c);
    
    delta = pow(b, 2)-4*a*c;
    printf("delta = %.2f\n", delta);
    
    if(delta > 0){
        printf("Delta is greater than 0 so there is two solutions:\n");
        x = (-b-sqrt(delta))/2*a;
        printf("%.2f", x);
        x2 = (-b+sqrt(delta))/2*a;
        printf("  ,  %.2f", x2);
    } else if(delta == 0){
        printf("Delta equals 0 so there is only one solution:\n");
        x = (-b)/2*a;
        printf("x");
    } else{
        printf("there is no real solution");
    }
	return 0;
}
