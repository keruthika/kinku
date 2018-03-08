#include <stdio.h>
int main()
{
    
    int a[20],n,j,i,flag=0;
    char s[20];
    printf("enter a string\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[j])
        {
            flag=1;
        }
        if(flag==1)
        {
        printf("no");
        }
        else
        {
        printf("yes");
        }
    }

    return 0;
}



