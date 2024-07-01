#include<iostream>
using namespace std;
class Base{
	public:
		virtual void pureVirtual()=0;
};

class Derived : public Base{
	public:
//		void pureVirtual(){
//			cout<<"This is pure virtual function"<<endl;
//		}
		void show(){
			cout<<"This is Derived class"<<endl;
		}
};

int main(){
	Derived d;
	d.pureVirtual();
	
}