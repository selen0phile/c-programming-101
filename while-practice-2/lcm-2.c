#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d",&a,&b);	
	int i = 1;
	int lcm;
	while(i<=a*b) {
		if(i%a == 0 && i%b == 0)
		{
			lcm = i;
			break;
		}
		i++;
	}
	printf("%d",lcm);
	return 0;
}
