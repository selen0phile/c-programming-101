#include<stdio.h>

int main() {
	int a,b,c;
	printf("Enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(b-a == c-b) 
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	return 0;
}
