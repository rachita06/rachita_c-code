#include<stdio.h>
int main()
{
	float P,T,R,I;
		printf("Enter Principle,Time,Rate");
		scanf("%f%f%f",&P,&T,&R);
		I=(P*T*R)/100;
		printf("The SI is%f",I);
		return 0;
}
