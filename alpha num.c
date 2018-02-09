#include<stdio.h>
void main()
{
char s[10];
printf("Enter a string:\n");
scanf("%s",&s);
if(((s<='a')||(s<='z'))&&((s<=0)||(s>=9)))
{
printf("no");
}
else
{
printf("yes");
}
}
