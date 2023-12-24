#include<stdio.h>
/*
p = 8   4   2   1
d = 1   0   1   1

decimal = decimal + p*d;

8*1 + 4*0 + 2*1 + 1*1 = 11

123 % 10 = 3
45 % 10 = 5
last digit of x = x % 10

123 % 10 = 3 <----
123 / 10 = 12
12 % 10 = 2 <----
12 / 10 = 1
1 % 10 = 1 <-----
1 / 10 = 0 .... stop here!

*/
int main() {
	int n;
	scanf("%d", &n);
	int decimal = 0;
	int power = 1;
	while(n > 0)
	{
		int d = n % 10;
		n = n / 10;
		decimal = decimal + power * d;
		power = power * 2;
	}
	printf("%d", decimal);
	return 0;
}
