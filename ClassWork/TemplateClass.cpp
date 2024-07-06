#include<iostream>
using namespace std;
template <class T> class Square{
	T num, num2;
	public:
		Square(T a, T b){
			num = a;
			num2 = b;
		}
		
		T myMax(){
			return ((num > num2) ? num: num2);
		}
		
		
		void display(){
			cout<<num<<endl;
		}
};

int main(){
	Square <int> obj(23,32);
	obj.display();
	cout<<obj.myMax();
	
}