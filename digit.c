#include<stdio.h>
int main()
{
int n,i,k;
printf("enter the number");
scanf("%d",&n);
i=n;
while(n>0)
{
k=n%10;
n=n/10;
printf("\nthe digit of a number is %d",n);
}
return  0;
}
