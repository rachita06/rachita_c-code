#include<stdio.h>
int main()
{
	int age;
	printf("enter age of person");
	scanf("%d",&age);
	if(age<18)
	{
		printf("Not eligible for voting");
	}
	else
	{
		printf("eligible for voting");
	}
	return 0;
}
