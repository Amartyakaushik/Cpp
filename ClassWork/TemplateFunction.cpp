#include<iostream>
using namespace std;
template <typename T> T myMax(T a, T b){
	return ((a > b) ? a: b);
}

int main(){
	cout<< (myMax<int>(23,222))<<endl ;
	cout<< (myMax<double>(2333.0,222.0))<<endl ;
}