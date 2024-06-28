#include<iostream>
using namespace std;
class A{
	public: 
		A(int a){
			cout<<"Constructor with: "<<a<<endl;
		}
		
		~A(){
			cout<<"Destructor of the base class"<<endl;
		}
};

class B: public A{
	public:
/*		 --> it'll throw an error as the base class has a parameterized constructor.
		B(){      
			cout<<"Constructor of derived class"<<endl;
		} 
		*/
		B(int c,int a):A(a){
			cout<<"Constructor of derived class with "<<c<<endl;
		}
		
		~B(){
			cout<<"Destructor of derived class"<<endl;
		}
};

int main(){
//	B obj(3);
	B obj(3,2);
	
}