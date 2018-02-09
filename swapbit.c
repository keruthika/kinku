#include <stdio.h>
int main() 
{
    int a=6;
    int b=2;
    printf(" value of a=%d b=%d before swapping",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("value of a=%d b=%d after swapping",a,b);
    return 0;    
 }
