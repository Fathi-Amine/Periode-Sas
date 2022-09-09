#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word[50];
    printf("Enter a word: \n");
    scanf("%s",&word);

    int length= strlen(word);
    int i = 0;
    int isPal = 1;

    while(i < length/2){
        if(word[i] != word[length-1-i]){
            isPal = 0;
        }
        i++;
    }
	
	if( isPal == 0 ){
		printf("The word is not a palidrome");
    }else{
        printf("The word is a palindrome");
    }
	
	
	return 0;
}
