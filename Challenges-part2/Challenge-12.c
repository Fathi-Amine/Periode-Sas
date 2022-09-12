#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1, y1, x2, y2, xa, ya;
    double distance, distance1, distance2;
    printf("Entrez les coordonees de x1 et y1\n");
    scanf("%lf%lf", &x1, &y1);
    
    printf("Entrez les coordonees de x2 et y2\n");
    scanf("%lf%lf", &x2, &y2);
    
    printf("Entrez les coordonees xa et ya\n");
    scanf("%lf%lf", &xa, &ya);
    
    distance1 = sqrt( (x1-xa)*(x1-xa)+(y1-ya)*(y1-ya) ); 

    distance2 = sqrt( (x2-xa)*(x2-xa)+(y2-ya)*(y2-ya) );
    
    distance = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) );
    
    if( distance == distance1 + distance2 )
	{
		printf("Le point est sur le segment. \n");
	}else
	{
		printf("Le point n'est pas sur le segment. \n");
	} 
	return 0;
}
