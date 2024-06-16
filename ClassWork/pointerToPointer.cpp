#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int *p = &a;
	int **pp=&p;
	cout<<&p<<endl;
	cout<<pp<<endl;
	cout<<p<<endl;
	cout<<&a<<endl;
	cout<<*pp<<" "<<**pp>>endl;
	cout<<*p<<" "<<a<<endl;
	
	
}