#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int x = 1, y = 1;
	int sum = 0;
	while(x <= n) {
		sum = sum + y;
		x = x + 1;
		if(x % 2 == 0)
		{
			y = -x;
		}
		else 
		{
			y = x;
		}
	}
	printf("The sum is: %d", sum);
	return 0;
}
