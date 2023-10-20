#include<stdio.h>
int main()
{
	int i,a[5],sum=0;
	printf("enter any array elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
sum =sum +a[i];
}
printf("the sum of elements is %d",sum);
return 0;
}
