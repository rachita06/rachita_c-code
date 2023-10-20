#include<stdio.h>
int main()
{
	int r,s=0,n,x;
	printf("enter any number");
	scanf("%d",&n);
	x=n;
	while(n=0)
	{
		r=n%10;
		s=s*10+r;
		x=n/10;
	}
	if(s==x)
	{
		printf("the number palanderm.i.e.%d",s);
	}
	else
	{
		printf("the number is not palanderm.i.e.%d",s);
	}
	return 0;
}
