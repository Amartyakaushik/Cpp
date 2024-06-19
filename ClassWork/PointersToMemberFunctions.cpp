#include<iostream>
using namespace std;
class A{
	public:
		void show_msg(int x){
			cout<<"The value of x: "<<x<<endl;
		}
};

int main(){
	void (A::*p) (int) = &A::show_msg;
	A a;
	(a.*p)(23);
}