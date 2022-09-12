#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, sum, max;
	printf("Enter a number: ");
	scanf("%d", &num);
	do {
		
		if(num > max) {
			max = num;
		}
		sum = sum + num;
		printf("Enter a number: ");
		scanf("%d", &num);
	}while(num <= 100 && num > 0);
	printf("La somme du serie est: %d \n", sum);
	printf("Le max du serie est: %d \n", max);
	return 0;
}
