#include<stdio.h>
int main()
{
	int s;
	printf("enter your salary");
	scanf("%d",&s);
	if(s>500000)
	{
		float tax=0.15*s;
		printf("your tax amount is%f",tax);
	}
	return 0;
}
