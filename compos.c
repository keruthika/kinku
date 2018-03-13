#include <stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<(n/2);i++)
    {
        if(n%2==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("not a composite number");
    }
    else
    {
        printf("composite number");
    }
    return 0;
}
