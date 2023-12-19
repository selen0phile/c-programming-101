#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	int x = 1;
	int count = 0;
	while(x <= n) 
	{
		if(n % x == 0) 
		{
			printf("%d\n", x);
			count = count + 1;
		}
		x = x + 1;
	}
	printf("Total number of divisors: %d", count);
	return 0;
}
