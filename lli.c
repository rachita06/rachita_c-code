#include<stdio.h>
int addnumber(int a,int b);
int main()
{
	int n1,n2,sum;
	printf("enter any two numbers");
	scanf("%d%d",&n1,&n2);
	sum=addnumber(n1,n2);N
	printf("the sum is %d",sum);
	return 0;
}
int addnumber(int a,int b)
{
	int sum=a+b;
	return sum;
}
