#include<stdio.h>
int main()
{
    int a[20],i,n;
    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
    }
n=a[0];
for(i=0;i<10;i++)
{
    if(i<a[i])
{
    n=a[i];
}
}
printf(" the maximum number is %d",n);
return 0;
}
