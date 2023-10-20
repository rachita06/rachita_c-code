#include<stdio.h>
int addnumbers(int a,int b);
int main()
{
	int n1,n2,sum;
	printf("enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	sum=addnumber(n1,n2);
	printf("the sum is %d",sum);
	return 0;
}
int addnumber(int a,int b)
{
int sum=a+b;
return sum;

	
	
}
