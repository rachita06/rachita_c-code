#include<stdio.h>
int main()
{
	int i,j, a[5][4],sum=0;
	printf("enter your array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	{
		scanf("%d",&a[j]);
		sum=sum +a[j];
	}
	printf("sum the array element is %d",sum);
	return sum;
	
}
