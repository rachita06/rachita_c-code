#include<stdio.h>
int main()
{
	int n1,n2,choice,sum,diff;
	printf("enter n1 and n2");
	scanf("%d%d",&n1,&n2);
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:sum=n1+n2;
		printf("%d",sum);
		break;
		case 2:diff=n1-n2;
		printf("%d",diff);
		break;
		default:
			printf("your choice is wrong");
			break;}
			return 0;
		}
