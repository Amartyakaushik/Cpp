#include<iostream>
using namespace std;
int main(){
	string str = "Amartya";
	char name[20]="Amartya Kaushik";
	string str2="Amartya Kaushik";
	cout<<"Size: "<<str.size()<<endl;
	cout<<"Bytes: "<<sizeof(str)<<endl;
	cout<<"Bytes: "<<sizeof(name)<<endl;
	cout<<"Bytes: "<<sizeof(str2)<<endl;
	cout<<"Length: "<<str.length()<<endl;
	cout<<"Maximum size of str: "<<str.max_size()<<endl;
	cout<<"Empty: "<<(str.empty()?"Yes":"No")<<endl;
}