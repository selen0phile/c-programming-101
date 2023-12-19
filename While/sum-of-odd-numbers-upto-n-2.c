#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int x = 1;
	int sum = 0;
	while(x <= n) {
		sum = sum + x;
		x = x + 2;
	}
	printf("The sum is: %d", sum);
	return 0;
}
