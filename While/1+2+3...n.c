#include<stdio.h>

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int x = 0;
	int sum = 0;
	while(x <= n) {
		sum = sum + x;
		x = x + 1;
	}
	printf("The sum is: %d", sum);
	return 0;
}
