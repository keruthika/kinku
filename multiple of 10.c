#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    while((n%10)!=0)
    {
        n=n+1;
    }
    printf("%d",n);
    return 0;
}

