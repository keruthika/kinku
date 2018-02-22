#include <stdio.h>
int main()
{
    int n,i;
    printf("\n enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("\n not a prime no");
        }
        else
        {
            printf("\n prime no");
        }
        return 0;
    }
}



