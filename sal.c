#include<stdio.h>
int mani()
{
	int sal;  float tax;
	printf("enter the salary");
	scanf("%d",&sal);
	if(sal<20000)
	{
		printf("No tax");
	}
	else if(sal>20000 && sal<=20000)
	{
		tax=0.2*sal;
		printf("%f",tax);
	}
	return 0;
}
