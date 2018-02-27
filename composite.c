#include<stdio.h>
int main()
{
int n,flag=0,i;
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
printf("no");
}
else
{
printf("yes");
}
return 0;
}
