
#include<stdio.h>
int main()
{
  int a[5],i,j,t;
  for(i=1;i<=5;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[j]=a[i];
        a[i]=t;
      }
    }
    
  }
  printf("%d",a[0]);
  return 0;
}
