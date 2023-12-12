#include<stdio.h>

int main() {
	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	int remainder = x%2;
	if(remainder == 0) 
	{
		printf("even");
		printf("number");
	}
	else 
	{
		printf("odd");
		printf("number");
	}
	return 0;
}
