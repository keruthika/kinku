#include <stdio.h>
int main()
{
    int i,n,r,rev=0;
    printf("enter a number");
    scanf("%d",&n);
while(n!=0)
{
                r=r%10;
                rev=rev*10+r;
                n=n/10;
                printf("reverse number=%d",rev);
}
    return 0;
}
