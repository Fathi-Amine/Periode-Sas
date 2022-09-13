#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p,n,isPrime,i;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(p = 2; p < n; p++){
		isPrime = 1;
		for(i = 2; i < p; i++){
			if(p%i == 0) {
				isPrime = 0;
				break;
			};
		}
		if(isPrime == 1) {
			printf("%d \n", p);
		}
	}
	return 0;
}
