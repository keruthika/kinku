#include<stdio.h>
int main()
{
int n,r,sum=0;
printf("\n enter the number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
n=n/10;
sum=sum+rem;
}
printf("%d",sum);
return 0;
}
