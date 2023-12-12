//Enter two numbers: 5 6
//Greater number is: 6
//
//Enter two numbers: 6 6
//Numbers are equal
#include<stdio.h>
int main() {
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	if(x > y)
	{
		printf("Greater number is: %d", x);
	}
	if(y > x) {
		printf("Greater number is: %d", y);
	}
	if(x == y) {
		printf("Numbers are equal");
	}
	
	
	return 0;
}
