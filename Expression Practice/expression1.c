#include <stdio.h>
int main()
{
    float x = 2.1;
    float y;
    y = 4.2;
    
    float z;
    
    z = (x*y + x*x*x*y*y*(x*x + y*y)) / (x+y+x*x);
    
    printf("%f",z); 
}
