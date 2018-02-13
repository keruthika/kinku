#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,count=0;
    char s1[20];
    printf("\n enter a string");
    scanf("%s",&s1);
    i=strlen(s1);
    for(j=0;j<i;j++)
    {
        if((s1[i]==1)||(s1[i]==1))
        {
        count++;
        }
        if(count=i)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
        return 0;
}
