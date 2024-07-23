#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int rollNo;
		
};

class Test:public Student{
	protected:
		int sub1Marks;
		int sub2Marks;
};

class Result: public Test{
	public:
		void getData(){
			cout<<"Enter Student Name: ";
			getline(cin,name);
			cout<<"Enter Roll No: ";
			cin>>rollNo;
		}
		void getMarks(){
			cout<<"Subject1 marks: ";
			cin>>sub1Marks;
			cout<<"Subject2 marks: ";
			cin>>sub2Marks;
		}
		
		void showMarks(){
			cout<<"Marks1: "<<sub1Marks<<endl;
			cout<<"Marks2: "<<sub2Marks<<endl;
		}
		void showData(){
			cout<<"Enter Student Name: "<<name<<endl;
			cout<<"Enter Roll No:"<<rollNo<<endl;
		}
};

int main(){
	Result r;
	r.getData();
	r.getMarks();
	r.showData();
	r.showMarks();
}