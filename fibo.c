#include<stdio.h>
int main()
{
int n,i,x=0,y=1,z;
printf("enter the number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
z=x+y;
x=y;
y=z;
printf("%d",z);
}
return 0;
}
