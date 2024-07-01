/*

	compile time polymorphism -> static / Early binding...
   Early Binding 
     -> while calling function by any pointer pointing to any object then it'll invoke the function of 
	 pointer's type.
	 -> Faster

	run time polymorphism -> dynamic binding...
*/
#include<iostream>
using namespace std;
class Base{
	public:
		void display(){
			cout<<"Base clas"<<endl;
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
	ptr->display();
}