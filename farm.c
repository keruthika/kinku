#include<stdio.h>
int main()
{
    float l,b,area=0;
    printf("enter the length(L) and breadth(B)");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("area of the farm%0.5f",area);
    return 0;
}
