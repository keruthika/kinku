#include<stdio.h>
void main()
{
int a=1,b=2,c,n;
scanf("%d",&n);
printf("%d %d",a,b);
while(n>0)
{
c=a+b;
a=b;
b=a;
}
printf("%d \t",c);
n=n-2;
}
