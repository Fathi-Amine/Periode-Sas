#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f0, f1, i, n,fn;
	f0 = 0;
	f1 = 1;
	fn = f0 + f1;
	printf("Enter a number: \n");
	scanf("%d", &n);
	for(i = 3; i <= n; ++i){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	
	printf("%d", fn);

  return 0;

}
