#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letter;
	printf("Please enter a letter: ");
	scanf("%c", &letter);
	if(letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
	{
		printf("this Character is an alphabe \n");
	}else
	{
		printf("this Character is not an alphabet");
	}
	
	if(letter >= 'A' && letter <= 'Z')
	{
		printf("This letter is Uppercase");
	}else if(letter >= 'a' && letter <= 'z')
	{
		printf("This letter is Lowercase");
	}
	return 0;
}
