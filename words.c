#include<stdio.h>
int main()
{
int i;
printf("enter the number");
scanf("%d",&i);
if(i<=4)
{
 switch(i)
 {
 case 1:
         printf("\none");
         break;
 case 2:
         printf("\ntwo");
         break;
 case 3:
         printf("\nthree");
         break;
 case 4:
         printf("\nfour");
         break;
         default:
         break;
 }
}
return 0;
}
