#include<iostream>
using namespace std;
/*
OPERATOR OVERLOADING 
-> used to provide additional functionality and meaning to a particular operator...
*/
class Number{
	private:
		int x,y,z;
		public:
			Number(int a, int b, int c){
				x = a;
				y = b;
				z = c;
			}
			
//			void operator-(){
//				x = -x;
//				y = -y;
//				z = -z;
//			}
			
			void showData(){
				cout<<"X: "<<x<<endl;
				cout<<"Y: "<<y<<endl;
				cout<<"Z: "<<z<<endl;
				cout<<endl;
			}
			
			void operator++(){
				cout<<"Prefix increment:"<<endl;
				x = ++x;
				y = ++y;
				z = ++z;
//				cout<<++x<<endl;
			}
			
			friend void operator++(Number,int);
			friend void operator-(Number);
			friend void operator--(Number);
};


void operator++(Number obj,int){
	cout<<"Postfix increment"<<endl;
	cout<<(obj.x++)<<endl;
	cout<<(obj.y++)<<endl;
	cout<<(obj.z++)<<endl;
	obj.x = (obj.x++);
	obj.y = (obj.y++);
	obj.z = (obj.z++);
}


void operator--(Number obj){
	cout<<"Prefix decrement"<<endl;
	cout<<--obj.x<<endl;
	cout<<--obj.y<<endl;
	cout<<--obj.z<<endl;
	cout<<endl;
//	cout<<obj.x<<endl;
//	cout<<obj.y<<endl;
//	cout<<obj.z<<endl;
}

//void operator-(Number obj){
//	obj.x = -(obj.x);
//	obj.y = -(obj.y);
//	obj.z = -(obj.z);
//}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	Number num1(a,b,c);
//	num1.showData();
//	-num1;// Indirect way of calling 
	// num1.operator-();  // Directy way of calling operator member function
	
//	++num1;
//	num1.showData();
//	--num1;
	num1.showData();
	num1++;
	num1.showData();
}