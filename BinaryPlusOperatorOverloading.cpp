#include<iostream>
using namespace std;
class Binary{
	private:
		int x, y;
	public:
		Binary(){
			x =0;
			y =0;
		}
		
		Binary(int a, int b):x(a),y(b){
		};
		
		Binary operator+(Binary obj1){
			Binary temp;
			temp.x = x + obj1.x;
			temp.y = y + obj1.y;
			return temp;
		}
		
		void showData(){
			cout<<x<<" "<<y<<endl;
		}
};

int main(){
	Binary obj(1,2),obj2(3,4),obj3;
	obj3 = obj + obj2;
	obj3.showData();
}