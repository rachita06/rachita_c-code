#include<stdio.h>
int addnumbers(int a,int b);
int main()
{
	int n1,n2,sum;
	printf("enter the two elements");
	scanf("%d%d",&n1,&n2);
	sum=addnumbers(n1,n2);
	printf("the sum is %d",sum);
	return 0;
}
int addnumbers(int a,int b)
{
	 int sum=a+b;
	return sum;
	
}
