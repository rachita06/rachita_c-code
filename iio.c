#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	gets(a);
	strcpy(b,a);
	strrev(a);
	if (strcmp(a,b)==0)
	{
		printf("the palindrome is %s",b);
	}
	else
	{
	printf("not palindrome is %s",b);
}
return 0;
}
	
