#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n = 1,p,on;
	printf("enter a number");
	scanf("%d", &on);
	printf("enter the power");
	scanf("%d", &p);
	if(on > 0 && p >= 0){
		while(p > 0) {
			n = on * n;
			p--;
		}
		printf("%d \n", n);
	}else{
		printf("Unvalid Exponential number");
	}
	
	return 0;
}
