#include<iostream>
using namespace std;
class A{
	public: 
		A(){
			cout<<"Constructor of Base class"<<endl;
		}
		
		~A(){
			cout<<"Destructor of the base class"<<endl;
		}
};

class B: public A{
	public:
		B(){
			cout<<"Constructor of derived class"<<endl;
		}
		
		~B(){
			cout<<"Destructor of derived class"<<endl;
		}
};

int main(){
	B obj;
	
}