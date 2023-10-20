#include<stdio.h>
int main()
{
	int a[5],i,max,min;
	printf("enter the array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	min=a[0];
	for (i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min =a[i];
	}
	printf("the maximum is %d",max);
	printf("the minimum is %d",min);
	return 0;
	}
