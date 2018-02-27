#include<stdio.h>
#include<string.h>
int main()
{
char st[10];
int a=0;
printf("enter a string");
scanf("%s",&st);
a=strlen(st);
if(a%2==0)
{
st[a/2]='*';
st[a/2]='*';
}
else
{
st[a/2-1]="*";
}
printf("the string is %s",st);
return 0;
}
