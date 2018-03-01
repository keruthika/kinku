#include <stdio.h>
int main()
{
   int num;
   printf("enter a number\n");
   scanf("%d",&num);
   if(num%13==0)
   printf("yes");
   else
   printf("no");
   return 0;
}
