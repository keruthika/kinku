#include<stdio.h>
void main()
{
char st[20],st1[20];
int i=0,k=0;
printf("\nEnter a string");
scanf("%s",&st);
while(st[i]!='\0')
{
    if((st[i]>='0')&&(st[i]<='9'))
    {
        st1[k]=st[i];
        k++;
    }
    i++;
}
printf("\n Numbers in the string %s",st1);
}
