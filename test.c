#include<stdio.h>
int main()
{
	int i, a[10],sum=0;
	printf("enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum =sum +a[i];
		
	}
	printf("the sum of array elements is%d",sum);
	return sum;
}
