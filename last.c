#include <stdio.h>
int main()
{
   int n,i,r;
   printf("enter the number");
   scanf("%d%d",&n,&i);
   while(i!=0&&n!=0)
   {
       r=n%10;
       printf("%d",r);
       n=n/10;
       i--;
   }
   return 0;
}
   
