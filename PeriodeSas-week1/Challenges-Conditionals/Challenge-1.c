#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double F, C;
	printf("Please enter the temperature in Farhrenheit: ");
	scanf("%lf", &F);
	
	C = (F-32) / 1.8;
	
	
	if(C < 0) 
	{
		printf("Its very cold outside");
	}
	else if(C > 0 && C < 23)
	{
		printf("Its cold outside");
	}
	else if(C > 23 && C < 35)
	{
		printf("Its hot outside");
	}
	else
	{
		printf("Its very hot outside");
	}
	return 0;
}
