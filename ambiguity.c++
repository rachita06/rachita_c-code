#include<iostream>
using namespace std;
class A
{
	public:
		void show(){
			cout<<"this is a class A"<<endl;
			
		}
	};
	class B{
		public:
			void show()
			{
				cout<<"this is a class B"<<endl;
				
			}
	};
	class C 
	{ 
	public:
	void show()
	{
	
}
	};
	int main()
	{
		C c;

		C.A::show();
		C.B::show();
	}
	
		
