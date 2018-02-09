#include<stdio.h>
void main()
{
int i,j,k;
printf("Enter the numbers \n");
scanf("%d%d",&i,&j);
k=i;
i=j;
j=k;
printf("after swapping \n");
printf("%d\t%d",i,j);	
}
