#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int x = 1;
	int sum = 0;
	while(x <= n) {
		sum = sum + (2*x-1);
		x = x + 1;
	}
	printf("The sum is: %d", sum);
	return 0;
}
