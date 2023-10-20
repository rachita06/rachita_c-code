#include<iostream>
using namespace std;
class A
{
	int num1=30,num2=40;
	public:
		void fun()
		{
		int sum=num1+num2;
		cout<<"addition"<<sum<<endl;
			
		}
		void fun( int a,int b)
		
		
		{
		int	sub=a-b;
		cout<<"sutraction"<<sub<<endl;
	}
		};
		int main()
		{
		
		A obj;
		obj.fun();
		obj.fun(100,55);
		return 0;
	}

