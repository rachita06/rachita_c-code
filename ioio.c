#include<stdio.h>
int main()
{
	int i,large,small,a[10];
	printf("enter any array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	large=a[0];
	small=a[0];
	for(i=0;i<10;i++)
	{
		if(large<a[i])
		large=a[i];
		if(small>a[i])
		small=a[i];
	}
	printf("the largest is%d",large);
	printf("the smallest is %d",small);
	return 0;
}

