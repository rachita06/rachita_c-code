#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("the greatest is%d",a);
	}
	else if(a<c)
	{
		printf("the greatest is%d",c);
	}
	else if(b>c)
	{
	 printf("the greatest is%d",b);
	}
	return 0;
}
