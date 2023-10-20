#include<stdio.h>
int main()
{ 
int a[3][3]={{1,2,3},{3,4,5},{3,6,9}};

int sum=0,i,j;
printf("matrix \n ");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	if(i==j)
	sum=sum+a[i][j];
	}
	
printf("\n");
}
printf("sum of diagonals of square of matrix is %d",sum);
	return 0;
}
	
