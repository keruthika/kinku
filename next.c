#include<stdio.h>
int main()
{
	int a[50],i,n=0;
	for(i=0;i<3;i++)
	{
  printf("enter a number");
	scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
	    n=1+a[i];
	   printf("next no is %d",n);	   
	}	
	return 0;
}
