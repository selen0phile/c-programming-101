#include<stdio.h>
#include<math.h>
int main() {
	float p, q, angle;
	scanf ("%f%f%f",&p,&q,&angle);
	angle = angle * 3.1416 / 180.0;
	float z = p*sin(angle);
	float n = q+p*cos(angle); 
	float o = atan(z/n);
	o = o * 180.0 / 3.1416;
	printf("angle is %f", o);
	return 0;
}
