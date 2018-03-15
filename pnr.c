
#include <stdio.h>
int main()
{
    float p,n,r;
    int si;
    printf("enter a value pnr");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("simple interest is %d",si);
    return 0;
}
