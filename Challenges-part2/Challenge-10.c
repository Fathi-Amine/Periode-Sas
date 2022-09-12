#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r_day;
	srand(time(NULL));
	r_day = rand()%7+1;
	if(r_day == 1){
		printf("Sunday");
	}else if(r_day == 2)
	{
		printf("Monday");
	}else if(r_day == 3)
	{
		printf("Tuesday");
	}else if(r_day == 4)
	{
		printf("Wednesday");
	}else if(r_day == 5)
	{
		printf("Thursday");
	}else if(r_day == 6)
	{
		printf("Friday");
	}else if(r_day == 7)
	{
		printf("Saturday");
	}
	return 0;
}
