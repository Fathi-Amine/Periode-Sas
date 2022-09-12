#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, i, result;
	printf("Enter a number :");
	scanf("%d", &num);
	i = 1;
	while(i <= 10) {
		result = num * i;
		printf("%d \n", result);
		i++;
	}
	
	
	return 0;
}
