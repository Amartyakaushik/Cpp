#include<iostream>

using namespace std;

// Friend class 

// -> used to access the private data members and member function of another class...



class ABC;   // Pre declartion of the friend class.

class XYZ{

	int data_xyz;

	public:

		void set(int x){

			data_xyz = x;

		}

		

		friend class ABC;

};



class ABC{

	int data_ABC;

	public:

		void setData(XYZ a){

			data_ABC = a.data_xyz;

		}

		void display(){

			cout<<data_ABC<<endl;

		}

};

// ###################################



// friend function for two classes

class B;

class A{

	int x;

	int y;

	public:

		void set(int a, int b){

			x = a;

			y = b;

		}

		

		friend class B;

		friend void diff(A a, B b);

};



class B{

	int z=2;

	public:

		void sum(A obj){

			int sum = obj.x + obj.y;

			cout<<"Sum: "<<sum<<endl;

		}

		

		friend void diff(A a, B b);

};



// Friend function definition

void diff(A a, B b){

	int diff = a.x - b.z;

	cout<<"Difference of x and z: "<<diff<<endl;

}

int main(){

	XYZ a;

	ABC b;

	a.set(23);

	b.setData(a);

	b.display();

	

	A s;

	B d;

	s.set(23,12);

	d.sum(s);

	

	diff(s,d);

}
