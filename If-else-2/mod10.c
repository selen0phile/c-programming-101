#include<stdio.h>

int main() {
	int x;
	printf("Enter an integer:");
	scanf("%d", &x);
	if(x % 10 == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
