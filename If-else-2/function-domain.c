#include<stdio.h>
#include<math.h>

int main() {
	float x;
	printf("Enter the number:");
	scanf("%f", &x);
	if(x > 5 || x < -5)
	{
		printf("%f", 1/sqrt(x*x-25));	
	}
	else
	{
		printf("Error");
	}
	return 0;
}
