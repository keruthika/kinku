#include<stdio.h>
int main()
{
int a[10];
int i,j,num;
printf("enter the no.of elememts");
scanf("%d",&num);
printf("enter the array elements");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num-1;i++)
{
for(j=i+1;j<num;j++)
{if (a[i]>a[j])
{
int t=a[i];
a[i]=a[j];
a[j]=t;
}}
}
printf("the minimum of the elements is %d",a[0]);
return 0;
}
