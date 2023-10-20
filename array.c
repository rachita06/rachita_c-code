#include<stdio.h>
int mani()
{
	int i,a[10],b[10],sum[10];
	printf("enter the first 1D array elements");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second 1D array elements");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		sum[i]=a[i]+b[i];
	}
	printf("the sum of array elements is %d",sum[i]);
	}
