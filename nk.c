#include <stdio.h>
int main()
{
    int x,y,z=1,i=1;
    printf("enter 2 numbers");
    scanf("%d%d",&x,&y);
    while(i<=y)
    {
        z=z*x;
        i++;
    }
    printf("%d",z);
    return 0;
}
