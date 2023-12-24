#include<stdio.h>

// n! = 1*2*3*...n
//i=1,2,3,4....n

int main() {
	int n;
	scanf("%d", &n);
	int f = 1;
	int i = 1;
	while(i<=n)  //i=1, n=0
	{
		f=f*i;
		i=i+1;	
	}	
	printf("%d", f);
	return 0;
}
