#include<stdio.h>
//1+3+6+10+15....nth term
//1+(1+2)+(1+2+3)+(1+2+3+4)+....(1+2+3+...n)
// nth term = n*(n+1)/2
/*
1
1+2=3
1+2+3=6
1+2+3+4=10
*/
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0, i = 1;
	while(i<=n) 
	{
		sum = sum + i*(i+1)/2;
		i = i + 1;
	}
	printf("%d",sum);
	return 0;
}
