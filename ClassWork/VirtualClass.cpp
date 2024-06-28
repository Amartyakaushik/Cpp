#include<iostream>
using namespace std;
class A{
	public:
	int x;
		void getX(){
			cout<<"Enter x: ";
			cin>>x;
		}
};
class C:virtual public A{
	public:
	int y;
		void getY(){
			cout<<"Enter Y:";
			cin>>y;
		}
};

class B: virtual public A{
	public:
	int z;
		void getZ(){
			cout<<"Enter Z:";
			cin>>z;
		}	
};

class D: public B, public C{
	public:
		void sum(){
			cout<<"Sum: "<<x+y+z;
		}	
};

int main(){
	D obj;
	obj.getX();
	obj.getY();
	obj.getZ();
	obj.sum();
	
}