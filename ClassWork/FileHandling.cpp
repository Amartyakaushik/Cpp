#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream outfile;
	outfile.open("Message.txt",ios::out);
	outfile<<"Welcome";
	cout<<"Position of pointer is: ";
	cout<<outfile.tellp()<<endl;
	
	cout<<"Enter Position to move: ";
	int n;
	cin>>n;
	outfile.seekg(n,ios::beg);
	cout<<"Position of pointer is: ";
	cout<<outfile.tellg()<<endl;
	
	cout<<"Enter the current position of the pointer to move: ";
	cin>>n;
	outfile.seekg(n,ios::cur);
	cout<<"Current Position of pointer is: ";
	cout<<outfile.tellg()<<endl;
	
	cout<<"Enter the end position of the pointer to move: ";
	cin>>n;
	outfile.seekg(-n,ios::end);
	cout<<"Position of pointer is: ";
	cout<<outfile.tellg()<<endl;
	
	
	
}