#include <stdio.h>
#include <math.h>
int main()
{
    float x = 1.2;
    float y = 1.1;
    
    
    float a = pow(x,2) + pow(y, 10);
    float b = pow(x,y) + 2*x + pow(y, 2);
    float z = pow(a,b);
    
    printf("%f", z);
    
}
