#include<stdio.h>

int main(){
	//our first calculator in c
	//declaring variables
	int firstNumber,secondNumber,add,sub,mul,div,mod;
	
	
	//Getting user input
	
	printf("Enter first Number: \n");
	scanf("%d",&firstNumber);
	
	printf("Enter second Number; \n");
	scanf("%d",&secondNumber);
	
    //calculating
	
	add = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
	
	//printing
	printf("the add is%d",add);
	printf("the sub is%d",sub); 
	printf("the mul is%d",mul);
	printf("the div is%d",div);
	printf("the mod is%d",mod);
}

	
	
