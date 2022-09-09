#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Enter the value of a :");
	scanf("%d", &a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	if(a <= b)
	{
		printf("b - a");
	}else 
	{
		printf("a - b");
	}
	return 0;
}
