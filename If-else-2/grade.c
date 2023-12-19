#include<stdio.h>

int main() {
	float marks;
	printf("Enter marks:");
	scanf("%f",&marks);
	
	if(marks >= 80)
	{
		printf("A+");
	}
	else if(marks < 80 && marks>=70)
	{
		printf("A");
	}
	else if(marks < 70 && marks>=60)
	{
		printf("A-");
	}
	else if(marks < 60 && marks >= 30)
	{
		printf("Unknown");
	}
	else if(marks < 30) 
	{
		printf("Fail");
	}
	return 0;
}
