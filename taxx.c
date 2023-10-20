#include<stdio.h>
int main()
{
	int sal; float tax;
	printf("enter the salary");
	scanf("%d",&sal);
	if(sal<100000)
	{
		printf("No tax");
	}
	else if(sal>100000 && sal<=200000)
	{
		tax=(13.3*sal);
		printf("%d",tax);
	}
	return 0;
}
