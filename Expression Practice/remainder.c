#include <stdio.h>
int main()
{
    int x = 10;
    int y = 4;
    
    int z = x / y;
    printf("%d\n", x/y);
    printf("%d\n", z);
    
    printf("remainder = %d\n", x - z * y);
    printf("remainder = %d\n", x % y);
    
}
