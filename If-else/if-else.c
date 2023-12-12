#include<stdio.h>

int main() {
	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	if(x < 0) 
	{
		printf("negative");
	}
	if(x > 0) 
	{
		printf("positive");
	}
	if(x == 0) 
	{
		printf("zero");
	}
	return 0;
}
