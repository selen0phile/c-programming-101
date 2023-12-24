#include<stdio.h>
// gcd -> greatest common divisor
// 6 8 -> 2
// 30 12 -> 6
// x=30, y=12
// n = 12
// i=6
int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	int n;
	if(x < y) 
	{
		n = x;	
	}	
	else
	{
		n = y;
	}
	int i=1;
	int gcd;
	while(i <= n)
	{
		if(x % i == 0 && y % i == 0)
		{
			gcd = i;	
		}
		i = i + 1;	
	}
	printf("%d", gcd);
	return 0;
}
