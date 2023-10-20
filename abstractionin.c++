#include<iostream>
using namespace std;
class car{
	bool startengine;
		public:
		void start(){
			startengine=true;
			cout<<"enginestarted"<<endl;
		}
		void drive(){
		if(startengine)
		{
			cout<<"you are ready to drive";
		}
		else
		{
			cout<<"you are not ready to drive";
		}
	}
};
main()
{
	car obj;
	obj.start();
	obj.drive();
}
	
