#include<stdio.h>

int main() {
	printf("Enter three numbers: ");
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);
	float average = (a+b+c)/3.0;
	printf("\nThe average is: %f", average);
	return 0;
}
