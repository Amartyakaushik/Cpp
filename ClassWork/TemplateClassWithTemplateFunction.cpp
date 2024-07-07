#include<iostream>
using namespace std;
template <class T, class U = char> class A{
	T name, age;
	public:
		A(T naam, T umar){
			name = naam;
			age = umar;
		}
		
		T changeDetails(T naam, T umar){
			name = naam;
			age = naam;
		}
		
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

int main(){
	A<char,int> a("Hariom",20);
	A<int , int>c("Amartya",19);
	cout<<sizeof(a)<<endl;
	cout<<sizeof(c)<<endl;
	a.display();
	a.changeDetails<void>("Amartya",21);
	a.display();
	
	
}