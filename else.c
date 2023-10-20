#include<stdio.h>
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	if(n%2)
	{
		printf("the number is odd");
	}
	else if(n%3)
	{
		printf("the number is even");
	}
	return 0;
}
