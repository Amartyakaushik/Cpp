#include<iostream>
#include<string>
using namespace std;
class Student{
	string name;
	int age;
	public:
		void getDetails(){
			cout<<"Enter Name: ";
			getline(cin,name);
			cout<<"Enter age: ";
			cin>>age;
		}
		void showDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

class Employee : public Student{
	int salary;
	char empID[20];
	public:
		void getEmployeeDetails(){
			getDetails();
			cout<<"Enter salary: ";
			cin>>salary;
			cout<<"Enter empoyee ID: ";
			cin.ignore();
			cin.getline(empID,20);
		}
		void showEmployeeDetails(){
			showDetails();
			cout<<"Salary: "<<salary<<endl;
			cout<<"Employee ID: "<<empID<<endl;
		}
};

int main(){
	Employee e;
	e.getEmployeeDetails();
	e.getDetails();
	e.showEmployeeDetails();
	e.showDetails();
}