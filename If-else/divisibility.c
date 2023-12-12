
#include<stdio.h>
int main() {
	int x;
	printf("Enter the number:");
	scanf("%d", &x);
	if(x%3 == 0 || x%4 == 0)
	{
		printf("YES");
	}	
	else
	{
		printf("NO");
	}
}
