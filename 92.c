#include<stdio.h>
void main()
{
    int a[20],n,k,sum=0;
    printf("\n enter n value");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
        sum=sum+a[k];
    }
    printf("\n sum %d",sum);
}
