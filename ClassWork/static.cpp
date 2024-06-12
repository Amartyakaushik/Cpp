#include<iostream>
using namespace std;
// STATIC data members and member function
// it's value is shared among all the instance of the class...
class item{
	static int code;
	static int count;
	public:
		void setData(int x){
			code = x;
			count++;
		}
		void showData(){
			cout<<code<<" "<<count<<endl;
		}
		
		// The static member functions can only access static data members...
		static void display(){
			cout<<code<<" "<<count<<endl;
		}
	};
	// it's mandatory to define the static data member outside the class...
	int item::count;
	int item::code;
	
	int main(){
		item a;
		a.setData(4);
		a.showData();
		item b;
		b.setData(34);
		b.showData();
		b.display();
	}