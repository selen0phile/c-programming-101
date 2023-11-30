#include<stdio.h>

int main() {
	float r;
	printf("Enter the value of radius: ");
	scanf("%f", &r);
	float area;
	area = 3.1416 * r * r;
	printf("Area of the circle is %f", area);
	return 0;
}
