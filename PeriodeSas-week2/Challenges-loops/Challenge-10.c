#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum=0;
	int i;
	for(i = 0; i < 10; i++){
		printf("i : %d",i);
		printf("Enter a number");
		scanf("%d", &n);
		if(n <= 0) {
			i--;
			continue;
		}
		sum = sum + n;
	}
	printf("%d", sum);
	return 0;
}
