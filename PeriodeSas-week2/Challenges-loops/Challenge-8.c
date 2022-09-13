#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, fa, fb, m,fm;
	a = -15;
	b = -10;
	while(b - a > 0.00001) {
		m = a + (b - a) / 2;
		fa = a*a*a+12*a*a+1;
		fb = b*b*b+12*b*b+1;
		fm = m*m*m+12*m*m+1;
		if(fa*fm <= 0) {
			b = m;
		}else {
			a = m;
		}
		
	}
	fa=a*a*a+12*a*a+1;
	print("%.5f, %.5f",a,fa);
	return 0;
}
