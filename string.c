#include<stdio.h>
#include<string.h>
int main()
{
	char x[]="i am rachita adhikari";
	char y[25];
	printf("enter the string array in x is %s",x);
	strcpy(y,x);
	printf("the string array in y is %s",y);
	return 0;
	
}
