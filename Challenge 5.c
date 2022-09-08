#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F, C;
    printf("enter the temperature in Fahrenheit: ");
    scanf("%lf", &F);
    C=(F-32)/1.8;
    printf("the temperature in Celsius : %f \n", C);
    if (C<0)
    {
        printf("very cold");
    }
    else if (0<C && C<20)
    {
        printf("cold");
    }
    else if (20<C && C<40)
    {
        printf("hot");
    }
    else
    {
        printf("very hot");
    }

    return 0 ;
}
