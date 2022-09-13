#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y,m,fx,fy,fm;
	x = -15;
	y = -10;
	while(y-x > 0.00001){
		m = x+(y-x)/2;
		fx = x*x*x+12*x*x+1;
		fy = y*y*y+12*y*y+1;
		fm = m*m*m+12*m*m+1;
		if(fx*fm<=0){
			y=m;
		}else {
			x=m;
		}
	}
	fx=x*x*x+12*x*x+1;
	printf("%.5f,%.5f",x,fx);
	return 0;
}
