#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day, month, year;
	printf("Please enter a date: ");
	scanf("%d/%d/%d",&day, &month, &year);
	if(month == 01){
		printf("%d-January-%d",day,year);
	}else if(month == 02) {
		printf("%d-February-%d",day,year);
	}else if(month == 03){
		printf("%d-March-%d",day,year);
	}else if(month == 04) {
		printf("%d-April-%d",day,year);
	}else if(month == 05){
		printf("%d-May-%d",day,year);
	}else if(month == 06){
		printf("%d-June-%d",day,year);
	}else if(month == 07) {
		printf("%d-July-%d",day,year);
	}else if(month == 08){
		printf("%d-August-%d",day,year);
	}else if (month == 09){
		printf("%d-September-%d",day,year);
	}else if(month == 10) {
		printf("%d-October-%d",day,year);
	}else if(month == 11) {
		printf("%d-November-%d",day,year);
	}else if(month == 12) {
		printf("%d-December-%d",day,year);
	}
	return 0;
}
