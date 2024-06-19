#include<iostream>
using namespace std;
class T{
	public:
	int x;
		 void display(){
		 	cout<<"x = "<<x<<endl;
		 }
};

int main(){
	T t;
	int T::*ptr = &T::x;
	t.*ptr = 23;
	t.display();
}