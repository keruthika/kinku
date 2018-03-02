#include<stdio.h>
int main()
{
int a,b,gcd,lcm,i;
scanf("%d %d",&a,&b);
for(i=1;i<=b && i<=b;++i)
{
  if(a%i==0 && b%i==0)
  gcd = i;
}
LCM=(a*b)/gcd;
printf"(\nLCM is %d",lcm);
return 0;
}
