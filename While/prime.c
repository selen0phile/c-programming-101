#include<stdio.h>
#include<math.h>

int main() {
	long long n;
	printf("Enter the value of n: ");
	scanf("%lld",&n);
	
	int x = 1;
	int count = 0;
	while(x <= sqrt(n)) 
	{
		if(n % x == 0) 
		{
			count = count + 2;
		}
		x = x + 1;
	}
	if(count == 2) 
	{
		printf("Prime number");
	}
	else 
	{
		printf("Composite number");
	}
	return 0;
}
