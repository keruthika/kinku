#include<stdio.h>
int main()
{
int a,b,sum=0;
printf("\n Enter two numbers");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==0)
{
printf("\n Even");
}
else
{
printf("\n odd");
}
return 0;
