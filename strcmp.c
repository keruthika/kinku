#include <stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int i,j;
	printf("\n enter the two strings");
	scanf("%s %s",&a,&b);
	i=strlen(a);
	j=strlen(b);
	if(i>=j)
	{
		printf("\n %s",a);
	}
	else
	{
	printf("\n %s",b);
	}
}
	
