#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float note;
	printf("Entrez la note obtenue :");
	scanf("%f",&note);
	if(note < 10)
	{
		printf("recale");
	}else if(note >= 10 && note < 12 )
	{
		printf("Mention: passable");
	}else if(note >= 12 && note < 14)
	{
		printf("Mention : Assez bien");
	}else if(note >= 14 && note < 16)
	{
		printf("Mention: Bien");
	}else
	{
		printf("Mention: Tres bien");
	}
	return 0;
}
