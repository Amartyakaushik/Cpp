#include<iostream>
using namespace std;
class Test{
	int x;
	public:
		Test(int x){
			this->x = x;
			cout<<"Value of x: "<<x<<endl;
		}
		Test(int a, int b=23){
			x = a+b;
			cout<<"Value of x: "<<x<<endl;
		}
};

class Test2{
	int x;
	public:
		Test2(int x=9){
			this->x = x;
			cout<<"Value of x: "<<x<<endl;
		}
		Test2(int a, int b=23){
			x = a+b;
			cout<<"Value of x: "<<x<<endl;
		}
};

int main(){
//	Test t1(3);  // error (ambiguous) as compiler gets confused to  call the 1st or 2nd constructor with default argument 
	Test t2(23,43);
	
	Test2 t1;
	Test2 t(20,20);
}