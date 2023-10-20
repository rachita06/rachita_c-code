#include<iostream>
using namespace std;
void showinfo(string name){
	cout<<name<<endl;
	
}
void showinfo(int age){
	cout<<age<<endl;
	
}
void showinfo(double salary){
	cout<<salary<<endl;
	
}
main(){

showinfo("Rachita");
showinfo(34);
showinfo(10000.50);
}

