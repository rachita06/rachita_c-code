#include<stdio.h>
int main()
{
	int a[10],b[10],sum[10],i;
	printf("enter the first 1D array elements");
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter the second 1D array elements");
	for(i=0;i<2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
		sum[i]=a[i]+b[i]; 
	}
	printf("the sum of two array");
	for(i=0;i<2;i++)
	{
		printf("the sum is %d",sum[i]);
	}
	return 0;
}
		
