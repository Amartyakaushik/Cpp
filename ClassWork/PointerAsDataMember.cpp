#include<iostream>
using namespace std;
class A{
	int a;
	int *p;
	public:
		void display(){
			cout<<"Enter value: ";
			cin>>a;
			p = &a;
			cout<<*p<<endl;
		}
};

int main(){
	A a;
	a.display();
}