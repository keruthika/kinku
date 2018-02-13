#include<stdio.h>
int main()
{
    char sen[10];
    int i=0,j,count=1,n;
    printf("enter a sentence");
    scanf("%s",sen);
    i=strlen(sen);
    for(j=0;j<n;j++)
    {
        if(sen[j]==" ")
        {
            count++;
        }
    }
        printf("no.of.words=%d",count);
        return 0;
}
