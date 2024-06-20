//////#include<iostream>
//////using namespace std;
////////class T{
////////	public:
////////	int x;
////////		 void display(){
////////		 	cout<<"x = "<<x<<endl;
////////		 }
////////};
//////
////////int* getPointer(){
////////	int x =23;
////////	return &x;
////////}
//////
//////int main(){
////////	T t;
////////	int T::*ptr = &T::x;
////////	t.*ptr = 23;
////////	t.display();
////////	
////////	T *p = &t;
////////	p->*ptr=243;
////////	p->display();
//////
////////	int *ptr = getPointer();
////////	cout<<*ptr;
////////	return 0;
//////
//////	
//////}
//////
//////
//////
////
////#include<iostream>
////using namespace std;
////class Test {
////private:
////    int x;
////public:
////    Test(int x = 0) { 
////        this->x = x; 
////    }
////    void change(Test* t) { 
////        this = t; 
////    }
////    void print() { 
////        cout << "x = " << x << endl; 
////    }
////};
////int main() {
////    Test obj(5);
////    Test anotherObj(10);
////    obj.change(&anotherObj);
////    obj.print();
////    return 0;
////}
//
//#include <iostream>
//using namespace std;
//int main() {
//    int* wildPtr = nullptr;
//    cout << *wildPtr;
//    return 0;
//} 




#include <iostream>
using namespace std;
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr;
    cout << ptr[1][2];
    return 0;
} 