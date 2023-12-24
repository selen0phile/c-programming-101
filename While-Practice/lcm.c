#include<stdio.h>
// lcm -> least common multiple
// 4 6 -> 12
// 2 4 -> 4
// x=12 y=20, lcm = 60
// x=2, y=3, lcm=6 ...
// 1 .... ?
// lcm <= x*y
// lcm * gcd = x*y
/*
i=1 .... 6*2=12
1 -> x
2 -> x
3 -> x
4 -> x
5 -> x
6 -> yes
7 -> no
..
12 -> yes
*/
int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	int i=1;
	int lcm;
	while(i <= x * y)
	{
		if(i%x==0 && i%y==0)
		{
			lcm = i;
			break;
		}
		i = i + 1;	
	}
	printf("%d", lcm);
	return 0;
}
