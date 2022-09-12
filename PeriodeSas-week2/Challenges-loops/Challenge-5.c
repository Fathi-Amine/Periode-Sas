#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char num[9];
	int length, i;
	printf("Entrez un nombre.");
	scanf("%s", &num);
	length = strlen(num);
	for(i = 0; i <= length - 1; i++) {
		if(num[length - 1 - i] >= 'A' && num[length - 1 -i] <= 'Z' || num[length - 1 - i] >= 'a' && num[length - 1 -i] <= 'z') {
			break;
		}else {
			printf("%c", num[length - 1 - i]);
		}
		
	}
	return 0;
}
