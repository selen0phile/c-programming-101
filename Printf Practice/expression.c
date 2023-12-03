#include<stdio.h>

int main() {
	int x=2;
	int y=3;
	int expression = (x*x*x+4*x*y+y*y*y)/(x*x+4*y);
	printf ("The value of the expression = %d, while x is equal to %d and y is equal to %d\n", expression, x, y);
	
	return 0;
}
