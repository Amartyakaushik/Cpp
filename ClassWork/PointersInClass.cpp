#include<iostream>
using namespace std;
class A{
	int a = 23;
	int b = 22;
	public:
		int c = 234;
		void display(){
			cout<<a+b<<endl;
		}
};
int main(){
	A a;
	A *p;
	p = &a;
	// These are two ways of accessing data members and member functions with the help of pointer...
	p->display();
	(*p).display();
	cout<<p->c;
}