#include<stdio.h>
int main()
{
	int n,r,c,s=0;
	printf("enter any number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+10*s;
		n=n/10;
	}
	if(c==s)
	printf("palindrome number");
	else
	printf("not palindrome");
	return 0;
}
