#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,S;
	printf("Enter the first value:");
	scanf("%d", &a);
	printf("enter the second value:");
	scanf("%d", &b);
	if(a == b)
	{
		printf("%d",S = (a + b)*3);
	}else
	{
		printf("%d",S=a+b);
	}
	return 0;
}
