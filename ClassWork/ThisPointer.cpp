#include<iostream>
using namespace std;
class Test{
	int x;
	public:
		void setX(int x){
			this->x = x;
		}
		
		void printX(){
			cout<<x<<endl;
		}
};

int main(){
	Test t;
	t.setX(23);
	t.printX();
}