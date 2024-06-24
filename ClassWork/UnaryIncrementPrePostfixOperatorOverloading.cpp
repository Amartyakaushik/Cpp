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
			
			friend void operator++(Number &obj,int);
			friend void operator--(Number &obj);
};


void operator++(Number &obj,int){
	cout<<"Postfix increment"<<endl;
	(obj.x++);
	(obj.y++);
	(obj.z++);
}
void operator--(Number &obj){
	cout<<"Prefix decrement"<<endl;
	--obj.x;
	--obj.y;
	--obj.z;
	
}


int main(){
	int a,b,c;
	cin>>a>>b>>c;
	Number num1(a,b,c);
	
	num1.showData();
	++num1;
	num1.showData();
	num1++;
	num1.showData();
	--num1;
	num1.showData();
}