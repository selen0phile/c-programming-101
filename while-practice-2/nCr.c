#include<stdio.h>

int main()
{
	int n, r;
	scanf("%d%d",&n,&r);	
	int i=1;
	int down = 1, up = 1;
	while(i<=r) {
		up = up * n;
		down = down * i;
		i++;
		n--;
	}
	int ans = up/down;
	printf("%d", ans);
}
