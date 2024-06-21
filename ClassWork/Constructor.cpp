#include<iostream>
using namespace std;
class Test{
	int x;
	public:
		Test(int x){
			this->x = x;
			cout<<"Value of x: "<<x<<endl;
		}
		Test(int a, int b){
			x = a+b;
			cout<<"Value of x: "<<x<<endl;
		}
};

int main(){
//	Test t; // this will throw error because the default constructor (i.e. no parameter consturctor) is not valid as explicit parameterized constructor is defined...
	Test t1(3);
	Test t2(23,43);
}