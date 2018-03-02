#include <stdio.h>
void main()
{
    char st[20],st1[20],st2[20]j=0,i=0;
    int k=0;
    printf("enter a string");
    scanf("%s",&st);
    while(st[k]!='\0')
    {
    if(k%2==0)
    {
        st1[j]=st[k];
        j++;
    }
    else
    {
        st2[k]=st[i];
        i++;
    }
    k++;
    }
    printf("even position string is %s",st1);
    printf("odd position string is %s",st2);
}
