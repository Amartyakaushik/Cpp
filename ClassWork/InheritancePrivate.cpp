#include<iostream>
#include<string>
using namespace std;
class Student{
	string name;
	int age;
	public:
		void getDetails(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
		}
		void showDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

class Employee : private Student{
	int salary;
	char empID[20];
	public:
		void getEmployeeDetails(){
			getDetails();
			cout<<"Enter salary: ";
			cin>>salary;
			cout<<"Enter empoyee ID: ";
			cin.ignore();
			getline(cin,empID);
//			(cin>>empID);
//			for(int i=0; i<20; i++){
//				cin>>empID[i];
//			}
		}
		void showEmployeeDetails(){
			showDetails();
			cout<<"Salary: "<<salary<<endl;
			cout<<"Employee ID: "<<empID<<endl;
		}
};

int main(){
	Employee e;
//	e.getDetails();
	e.getEmployeeDetails();
//	e.showDetails();
	e.showEmployeeDetails();
}