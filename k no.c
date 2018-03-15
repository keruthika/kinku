#include <stdio.h>
int main()
{
    int a[20],n,k,i;
    printf("enter the number n and k");
    scanf("%d%d",&n,&k);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d number is %d",k,a[k-1]);
return 0;
}
