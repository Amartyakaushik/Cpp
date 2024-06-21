#include<iostream>
using namespace std;
int main(){
	string str = "Amartya";
	string str2="Amartya Kaushik";
	cout<<"Size: "<<str.find("tya")<<endl;
	cout<<"Length: "<<str.rfind("rt")<<endl;
	cout<<"Maximum size of str: "<<str.find_last_of("a")<<endl;
	cout<<"Maximum size of str: "<<str.find_first_of("a")<<endl;
	cout<<"Empty: "<<(str.at(0))<<endl;
	cout<<"Empty: "<<(str[2])<<endl;
	str.swap(str2);
}