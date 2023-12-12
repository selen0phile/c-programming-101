//Enter 1st number: 5
//Enter 2nd number: 1
//Enter 3rd number: 10
//Greatest number is: 10

#include<stdio.h>//sdoijfslkdfjsldfjk
int main() {
	int a,b,c;
	printf("Enter 1st number: ");//sadfsdas
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a: %d",a);
		}
		else 
		{
			printf("c: %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("b: %d", b);
		}
		else 
		{
			printf("c: %d",c);
		}
	}
}
