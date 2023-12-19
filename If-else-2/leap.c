#include<stdio.h>
#include<math.h>

int main() {
	int year;
	scanf("%d", &year);
	if(year % 4 == 0) 
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
			{
				printf("YES");
			}	
			else 
			{
				printf("NO");
			}
		}
		else 
		{
			printf("YES");
		}
	}
	else
	{
		printf("NO");	
	}
}
