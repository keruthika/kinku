#include<stdio.h>
int main()
{
    int k,i;
    printf("enter a number");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(k%i==0)
        {
            printf("%d",k);
        }
    }
    return 0;
}
