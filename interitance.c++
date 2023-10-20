#include<iostream>
using namespace std;
class father{
	protected:
	string surname="bhumi";
};
class son:father{
	string name="rabindra";
	public:
		void show(){
			cout<<name<<" "<<surname<<endl;
					}
};
class daughter:father
{
	string name ="rachita";
	public:
		void disp(){
			cout<<name<<" "<<surname<<endl;
		}
	};
	main()
	{
		son s;
		s.show();
		
		daughter d;
		d.disp();
			}
			
			

