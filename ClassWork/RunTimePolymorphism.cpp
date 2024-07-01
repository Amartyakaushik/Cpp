/*
	run time polymorphism -> dynamic binding...
*/
#include<iostream>
using namespace std;
class Base{
	public:
		void display(){
			cout<<"Base clas"<<endl;
		}
		
		void PrintB(){
			cout<<"B"<<endl;
		}
		Base(){
			cout<<"Base constructor"<<endl;
		}
		
		virtual ~Base(){
			cout<<"Base destructor"<<endl;
		}
};


class Derived : public Base{
	public:
		void PrintD(){
			cout<<"D"<<endl;
		}
		void display(){
			cout<<"Derived class"<<endl;
		}
		Derived(){
			cout<<"Derived constructor"<<endl;
		}
		
		~Derived(){
			cout<<"Derived destructor"<<endl;
		}
};

int main(){
	Base *ptr;
	Derived obj;
	ptr = &obj;
	ptr->display();  // Base Class
	// To access any specific method of derived class using pointer of base class...
	((Derived *)ptr)->display();   // Derived class
	
	Derived *ptr2;
	Derived obj2;
	ptr2->PrintB();
	ptr2->PrintD();
	ptr2->display();
	ptr2->Base::display();
	
}