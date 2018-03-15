#include<stdio.h>
void main()
{
int max,i,a[10],n;
printf("\n Enter a  number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(max>a[i])
{
printf("\n the changed no is %d",i+1);
break;
}
}
}
