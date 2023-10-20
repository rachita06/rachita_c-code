#include<stdio.h>
int main()
{
	int s;
	printf("enter your salary");
	scanf("%d",&s);
	if (s<10000)
	{
		float n=0.2*s+s;
		printf("your new salary is%f",n);
	}
	else
	{
		float n=0.1*s+s;
		printf("your new salary is%f",n);
	}
	return 0;
}
