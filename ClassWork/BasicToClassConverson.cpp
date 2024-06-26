#include<iostream>
using namespace std;
class Time{
	int hours, minutes;
	public: 
		Time(int m){
			int h = m/60;
			hours = h;
			minutes = m % 60;
		}
		
		void display(){
			cout<<hours<<" hours and "<<minutes<<" minutes";
		}
};

int main(){
	int min;
	cin>>min;
	Time t(min);
	t.display();
}