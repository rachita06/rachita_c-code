#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"this is a class A";
			
		}
	};
	class B:public A
	{
		public:
			void show(){
				cout<<"this is class B"<<endl;
			}
		};
		int main()
		{
			B b;
			b.show();
			b.A::show();
		}

