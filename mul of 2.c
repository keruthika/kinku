#include<stdio.h>
int main()
{
	int n,m,pro;
	scanf("%d %d",&n,&m);
	pro=n*m;
	if(pro%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
