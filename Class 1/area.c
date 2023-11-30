#include<stdio.h>

int main() {
	float base,height;
	printf("Enter the value of base: ");
	scanf("%f",&base);
	printf("Enter the value of height: ");
	scanf("%f",&height);
	float area;
	area = 0.5 * base * height;
	printf("Area is %f\n", area);
	return 0;
}
