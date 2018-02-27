#include <stdio.h>
int main()
{
   int i,a,b,c,flag=0;
   printf("enter 3 numbers");
   scanf("%d%d%d",&a,&b,&c);
   for(i=b;i<c;i++)
   {
       if(i==a)
       {
           flag=1;
       }
   }
       if(flag==1)
       {
           printf("yes");
                  }
                  else
                  {
                      printf("no");
                  }
   return 0;
}



