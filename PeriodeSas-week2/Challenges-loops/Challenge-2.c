#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, space, rows, k = 0;
   	printf("Enter the number of rows: ");
   	scanf("%d", &rows);
   	for (i = 1; i <= rows; ++i, k = 0) {
      	for (space = 1; space <= rows - i; ++space) {
         	printf("  ");
      	}
      	while (k != 2 * i - 1) {
         	printf("* ");
         	++k;
      	}
      	printf("\n");
   	}
	return 0;
}
