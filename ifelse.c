#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("the smallest is%d",b);
	}
	else if(b>a)
	{
		printf("the smallest is%d",a);
	}
	return 0;
}
