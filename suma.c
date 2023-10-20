#include<stdio.h>
int main()
{
	int diff=0,i,a[5];
	printf("enter any array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		diff =diff -a[i];
	}
	printf("diff of array elements=%d",diff);
	return diff;
}
