#include<iostream>
using namespace std;
class atm{
	using  activeatm;
	public:
		void start();
		start atm=true;
		cout<<"activeatm":"<<endl;
	}
	void withdraw(){
		if (atmactivated){
			cout<<"you can be readt to withdraw:"<<endl;
		}
		else
		{
			cout<<"cannot be ready to withdraw:"<<endl;
		}
	}
};
main(){
	atm a;
	a.start();
	a.withdraw();
}
