#include<stdio.h>

int main() {
	int n = 10;
	int s = n*(n+1)/2;
	printf("Sum of 1+2+3+.....%d = %d",n,s);
	s = n*(n+1)*(2*n+1)/6;
	printf("\nSum of 1^2+2^2+3^2+4^2+....%d^2 = %d",n,s);
	return 0;
}
