#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour1,hour2,minute1,minute2,second1,second2;
	int i = 1;
	printf("Enter the first instant: \n");
	scanf("%d-%d-%d", &hour1, &minute1, &second1);
	printf("Enter the second instant: \n");
	scanf("%d-%d-%d", &hour2, &minute2, &second2);
	if(hour1 > hour2)
	{
		i = 2;
	}else if(hour1 == hour2 && minute1 > minute2)
	{
		i = 2;
	}else if(hour1 == hour2 && minute1 == minute2 && second1 > second2)
	{
		i = 2;
	}else if(hour1 == hour2 && minute1 == minute2 && second1 == second2)
	{
		i = 0;
	}
	if(i == 0)
	{
		printf("Il s'agit du même instant.");
	}else if(i == 1)
	{
		printf("Le premier instant vient avant le deuxième;");
	}else if(i == 2)
	{
		printf("Le deuxième instant vient avant le premier;");
	}
	return 0;
}
