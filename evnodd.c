#include <stdio.h>
int main()
{
    int n,a,b,diff=0;
    printf("enter 2 numbers");
    scanf("%d",&a,&b);
    diff=a-b;
    if(diff%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}

