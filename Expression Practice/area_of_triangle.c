#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c;
	scanf("%f%f%f",&a,&b,&c);
	float s=(a+b+c)/2.0;
	float A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area is %f",A);
	return 0;
}
