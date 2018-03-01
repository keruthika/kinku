#include<stdio.h>
#include<string.h>
void main()
{
char st[10];
int n=0,k;
printf("\nEnter a number");
scanf("%s",st);
n=strlen(st);
printf("\nOdd digits:");
for(k=0;k<n;k++)
{
if((st[k]%2)!=0)
{
printf("%c\t",st[k]);
}
}
