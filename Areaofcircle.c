#include<stdio.h>
#define pi 3.14
int main()
{
	float a,r,c;
	printf("enter a radius");
	scanf("%f",&r);
	a=pi*r*r;
	printf("the area is=%f",a);
	c=2*pi*r;
	printf("the circumference is=%F",c);
	return 0;
}
