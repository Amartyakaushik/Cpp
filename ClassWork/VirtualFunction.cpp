#include<iostream>
using namespace std;
class Base{
	public:
		virtual void display(){
			cout<<"Base clas"<<endl;
		}
		
		void PrintB(){
			cout<<"B"<<endl;
		}
};


class Derived : public Base{
	public:
		void PrintD(){
			cout<<"D"<<endl;
		}
//		void display(){
//			cout<<"Derived class"<<endl;
//		}
};

int main(){
	Base *ptr;
	Base obj;
	ptr = &obj;
	ptr->display();

	Derived obj2;
	ptr = &obj2;
	ptr->display();
}

/*
	Virtual function
	-> used to achieve run time polymorphism (late binding) by declaring method of base class as virtual. 
*/