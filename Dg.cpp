#include<iostream>

#include<vector>

using namespace std;

////template<class T>

////class Parent{

////	T a;

////	public:

////		void getPData(){

////			cout<<a<<endl;

////		}

////};

////

////template<class T, class T1>

////class Derived::public Parent<T>{

////	private:

////		T1 b;

////		public:

////			void getData(){

////				cin>>Parent<T>::a>>b;

////			}

////			

////			void displayData()

////};

//

//

//

//#include <iostream>

//using namespace std;

//class Base {

//public:

//    int x;

//protected:

//    int y;

//private:

//    int z;

//};

//class Derived : public Base {

//public:

//    void display() {

//        cout << x << " " << y << " " << z;

//    }

//};

//int main() {

//    Derived d;

//    d.display();

//    return 0;

//}



class A{

	public:

		int a;

		void print(){

			cout<<a<<endl;

		}

};



int main(){

//	int *a = new int(4);

//	int &m = *(new int(5));

//	cout<<*a<<m;

	A *obj = new A();

	obj->a = 23;

	obj->print();

	delete obj;

	obj->print();

	

//	int *obj = new int[23];

//	delete obj; // it deallocates only base address of the array;

//	delete []obj;  // it deallocates the whole the array 

	

	vector<int> a(100,0);

	a.push_back(23);

	a.push_back(24);

	a.push_back(25);

	for(auto i = a.begin(); i!=a.end(); i++){

//	while(i != a.end()){

		cout<<*i<<endl;

//		i++;

	}

	cout<<sizeof(a);   // it'll return the size of the vector only i.e 24;

	

	

//	cout<<a[0]<<endl;

	

}
