#include<iostream>
using namespace std;
class A{
	public:
		void disp(){
			cout<<"it is class A";
		}
	};
	class B:public A {
	public:
	
	void disp(){
	cout<<"it is class B";
}
				
	
};
main(){

B obj;
obj.disp();
}

