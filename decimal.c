
#include <stdio.h>
int main()
{
  float r,n;
  printf("enter the number");
  scanf("%f",&n);
  r=n+0.5;
  if(r>n+1)
  {
      printf("the rounded no is %d",n+1);
  }
  else
  {
      printf("the rounded no is %d",n);
  }
  return 0;
  }
