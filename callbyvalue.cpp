#include<iostream>
using namespace std;
void change(int*);

int main()
{
	int a=15;
	cout<<"before calling function a="<<a<<endl;
		change(&a);
	cout<<"after calling function a="<<a<<endl;
}
void change(int *x)
{
	*x=*x+5;
}
	
