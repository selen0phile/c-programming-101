#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int x = 0;
	while(x < n)
	{
		printf("hi\n");	
		x = x + 1;
	}
	printf("%d",x);
	return 0;
}
