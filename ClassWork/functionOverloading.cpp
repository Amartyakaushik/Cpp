#include<iostream>
using namespace std;
void add(int x, int y){
	cout<<"Sum: "<< x + y<<endl;
}
void add(float a, float b){
	cout<<"Sum: "<<a+b<<endl;
}

void add(double s, double d, double f){
	cout<<"Sum: "<< s + d + f<<endl;
}

int main(){
	int a,b;
	float c,d;
	double e,f,g;
	cin>>a>>b;
	add(a,b);
	cin>>c>>d;
	add(c,d);
	cin>>e>>f>>g;
	add(e,f,g);
}