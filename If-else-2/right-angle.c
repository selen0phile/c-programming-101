#include<stdio.h>

int main() {
	float a,b,c;
	printf("Enter three sides:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a*a == b*b + c*c)
	{
		printf("Yes");
	}
	else if(b*b == a*a + c*c)
	{
		printf("Yes");
	}
	else if(c*c == a*a + b*b)
	{
		printf("Yes");
	}
	else
	{
		printf("No");	
	}
	return 0;
}
