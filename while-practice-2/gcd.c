#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d",&a,&b);	
	int i = 1;
	int gcd;
	while(i<=a) {
		if(a%i==0 && b%i==0)
		{
			gcd = i;
		}
		i=i+1;
	}
	printf("%d", gcd);
	
	return 0;
}
