#include<iostream>
using namespace std;
// Friend function 
// -> it is used to access the private and protected data members of the class
//class example{
//	int x;
//	int y;
//	public:
//		void set(){
//			x = 23;
//			y = 2343;
//		}
//		
//		friend void sum(example a);
//};
//
//void sum(example a){
//	int s = a.x + a.y;
//}

class Arith{
	float x;
	float y;
	float z;
	public:
		void setData(float a, float b, float c){
			x = a;
			y = b;
			z = c;
		}
		
		friend void mean(Arith a);
};

void mean(Arith a){
	float m = (a.x + a.y + a.z)/3.0;
	cout<<"Mean: "<<m<<endl;
}

int main(){
	Arith x;
	x.setData(23.23,12.4,11.2);
	mean(x);
}