#include<stdio.h>
#include<math.h>
int main() {
	float P,Q,A;
	scanf ("%f%f%f",&P,&Q,&A);
	float R= sqrt(P*P+Q*Q+2*P*Q*cos(A*3.1416/180.0));
	printf(" the resultant is %f",R);
	return 0;
}
