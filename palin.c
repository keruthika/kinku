#include<stdio.h>
#include<string.h>
int main()
{
    char st[20];
    gets(st);
    if(st==strrev(st))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}


