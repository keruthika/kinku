#include<stdio.h>
int main()
{
char str[10];
int a,i=0;
printf("enter a string");
scanf("%s",&str);
scanf("%d",&a);
for(i=0;i<a;i++)
{
printf("%c",str[i]);
}
return 0;
