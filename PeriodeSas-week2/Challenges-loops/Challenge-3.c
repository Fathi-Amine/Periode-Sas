#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i, isPrime;
	printf("Enter The number to check :");
	scanf("%d", &num);
	if(num == 0 || num == 1)
	{
		printf("the number is not a prime");
	}else
	{
		isPrime = 1;
		for(i = 2; i < num; i++) {
			isPrime = num%i;
			if(isPrime == 0) break;
		}
		if (isPrime == 1) {
			printf("The number is a prime");
		}else {
			printf("The number is not a prime");
		}
	}
	return 0;
}
