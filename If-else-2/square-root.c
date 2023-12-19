#include<stdio.h>
#include<math.h>

int main() {
	float x;
	printf("Enter the number:");
	scanf("%f", &x);
	if(x >= 0) 
	{
		float y = sqrt(x);
		printf("%f", y);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
