#include<stdio.h>
void product (int a,int b);
int main()
{
	int x,y;
	printf("enter any number");
	scanf("%d%d",&x,&y);
	product(x,y);
	return 0;
}
void product(int a,int b)
{

 int p=a*b;
printf("%d",p);
return 0;
}


