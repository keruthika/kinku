#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
char a[10];
for(i=0;a[i]='\0';i++)
{
if(a[i]=0||a[i]=1||a[i]=2||a[i]=3||a[i]=4||a[i]=5||a[i]=6||a[i]=7||a[i]=8||a[i]=9)
count++;
printf("special characters are %d",count);
}
}
